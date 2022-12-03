#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
#include<numeric>

using namespace std;
//create a datatype that takes in all the different types of data
struct Film{
	int year;
	int length;
	string title;
	string subject;
	string actor;
	string actress;
	string director;
	int popularity;
	bool awards;
	string image;
	Film(int year, int length, string title, string subject, string actor, string actress, string director,
			int popularity, bool awards, string image){
		this->year = year;
		this->length = length;
		this->title = title;
		this->subject = subject;
		this->actor = actor;
		this->actress = actress;
		this->director = director;
		this->popularity = popularity;
		this->awards = awards;
		this->image = image;
	}
};

int totalMovieLength(vector<Film> &vec){
	//vector is full of film objects
	//each film object has a movie length
	//i want the summation of all those film object's lengths
	//to do that, i would need a vector full of only film object lengths
	vector<int> movieLength;
	//put every film length in the original vector into a new vector
	for(auto f: vec){
		movieLength.push_back(f.length);
	}
	//accumulate the sum of everything in the movieLength vector
	int sum = accumulate(movieLength.cbegin(), movieLength.cend(), 0);
	return sum;
}

bool comparePopularities(Film f1, Film f2){
	return (f1.popularity > f2.popularity);
}

void rankMovies(vector<Film> &vec){
	//sorts in descending order based on popularity
	sort(vec.begin(), vec.end(), comparePopularities);
	//prints the entire vector
	for(auto f: vec){
                cout << f.year << " " << f.length << " " << f.title << " " << f.subject << " " << f.actor << " "
                       << f.actress << " " << f.director << " " << f.popularity << " " << f.awards << " "
                                << f.image << endl;
        }
}

void find1997(vector<Film> &vec){
	//finds the first film  in the vector with the year 1997
	auto it = find_if(vec.begin(),vec.end(),[](Film f){return f.year == 1997;});
	cout << "The first movie in the vector from the year 1997: \n" << it->title << endl;
}

//create two new vectors from the film data, films with subject action and films with subject comedy.
//use unique to find the unique years the movies were released.
//use equal to compare the lists of the two unique year'd films 
void uniqueYearsEqual(vector<Film> &vec){
	vector<int> action;
	vector<int> comedy;
	for(Film f: vec)
	{
		if(f.subject == "Comedy")
			comedy.push_back(f.year);
		else if (f.subject == "Action")
			action.push_back(f.year);
	}
	//sorts the list
	sort(action.begin(), action.end());
	sort(comedy.begin(), comedy.end());
	//reorders each unique word once at the start of the vector and leaves empty spaces in the rest of the vector
	auto uniqueAction = unique(action.begin(), action.end());
	auto uniqueComedy = unique(comedy.begin(), comedy.end());
	//erases the empty space left by the unique
	action.erase(uniqueAction, action.end());
	comedy.erase(uniqueComedy, comedy.end());

	string result = equal(action.cbegin(), action.cend(), comedy.cbegin())? "Action and Comedy are equal" : "Action and comedy are not equal";
	cout << result << endl;

	
}

int main(){
	string year ="";
	string length = "";
	string title = "";
	string subject = "";
	string actor = "";
	string actress = "";
	string director = "";
	string popularity = "";
	string awards = "";
	string image = "";
	vector<Film> films;


	//read in data from the csv
	ifstream input ("film.csv.txt");
	//skip the first two lines because they dont matter
	getline(input, year);
	getline(input, year);
	//read the data from the .csv file into the array of film objects
	while(input.good()){
		getline(input, year, ';');
		getline(input, length, ';');
		getline(input, title, ';');
		getline(input, subject, ';');
		getline(input, actor, ';');
		getline(input, actress, ';');
		getline(input, director, ';');
		getline(input, popularity, ';');
		getline(input, awards, ';');
		getline(input, image, '\n');
		
		int year2int = (year == ""? 0: stoi(year));
		int length2int = (length == ""? 0: stoi(length));
		int popularity2int = (popularity == ""? 0: stoi(popularity));
		bool awards2bool;
		istringstream(awards) >> boolalpha >> awards2bool;
		

		Film f(year2int, length2int, title, subject, actor, actress, director, popularity2int, awards2bool, image);
		films.push_back(f);
	}
	//print the array just so i can see it and make sure it works
	cout << "The total length of all the movies is " << totalMovieLength(films) << " minutes." << endl;
	cout << "Movies ranked in descending order of popularity: " <<endl;
	rankMovies(films);
	find1997(films);
	uniqueYearsEqual(films);
	return 0;

	
}
