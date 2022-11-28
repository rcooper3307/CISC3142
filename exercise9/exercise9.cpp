#include<fstream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//create new class to store the variables from the csv of different types
struct Weather{
	string month;
	int temp;
	Weather(string month, int temp){
		this->month = month;
		this->temp = temp;
	}
};
double SimpleAverage(vector<Weather> v){
	double sum, simple_average;
	for(auto &w: v)
		sum += w.temp;
	simple_average = (sum / v.size());
	return  simple_average;
}
double MovingAverage(vector<Weather> v, int month){
	//retrieve the last 3 months before target month
	double sum, moving_average;
	for(int i = 1; i < 4; i++)
	{
		sum += v[(month-i)].temp;
	}
	moving_average = sum / 3;
	return moving_average;
}

double WeightedMovingAverage(vector<Weather> v,int month){
	double sum, weighted_moving_average;
	int weight = 1;
	for(int i = 3; i > 0; i--)
	{
		sum += (v[(month-i)].temp * weight);
		weight++;
	}
	weighted_moving_average = sum / 6;
	return weighted_moving_average;
}
int main(){
	string month;
	int temp;
	//created nested vector
	vector<Weather> vec;
	//create new filestream object
	//passing in filename string will open the file
	ifstream input ("weather.csv.txt");
	//skip first line
	getline(input, month);
	//while there still are good lines to read
	
	while(input.good()){
		
		//sa:wsswsdwwwwwwwwsda:ve the input line to line
		input.getline(input, month, ','); 
		input.getline(input, temp, '\n');
		//add values to vec
		Weather w(month, temp);
		vec.push_back(w);


	}
	//print the average temp across all months
	cout << "Simple Average is: " << SimpleAverage(vec) << endl;
	//print the moving acerage across 3 months for october
	cout << "Moving Average in October is: " << MovingAverage(vec, 9) << endl;
	//print the weighted moving average across 3 months for october
	cout << "Weighted Moving Average for October is: " << WeightedMovingAverage(vec, 9) << endl;
	return 0;
}
