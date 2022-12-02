#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>

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
		year = year;
		length = length;
		title = title;
		subject = subject;
		actor = actor;
		actress = actress;
		director = director;
		popularity = popularity;
		awards = awards;
		image = image;
	}
};

int main(){
	string year;
	string length;
	string title;
	string subject;
	string actor;
	string actress;
	string director;
	string popularity;
	string awards;
	string image;
	vector<Film> films;


	//read in data from the csv
	ifstream input ("film.csv.txt");
	//skip the first two lines because they dont matter
	getline(input, title);
	getline(input, title);
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
		year = stoi(year);
		length = stoi(length);
		popularity = stoi(popularity);
		bool awards2;
		istringstream(awards) >> boolalpha >> awards2;


		Film f(stoi(year), stoi(length), title, subject, actor, actress, director, stoi(popularity),  awards2, image);
		films.push_back(f);
	}

	//while(getline(i
}
