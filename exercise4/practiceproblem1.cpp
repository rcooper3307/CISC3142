#include<iostream>

int main(){
	//initialize variables cost, num_years, and inflation
	double cost, inflation;
	int num_years;
	//ask user for cost of the item, the number of years in which the item will be purchased, and the rate of inflation
	std::cout << "Enter the cost of the item." << std::endl;
	std::cin >> cost;
	std::cout << "Enter the number of years in which the item will be purchased." << std::endl;
	std::cin >> num_years;
	std::cout << "Enter the rate of inflation (%)." << std::endl;
	std::cin >> inflation;
	//convert inflation to a percentage
	inflation = (inflation/100) + 1;
	//create a for loop to adjust the price by the inflation for num_years years
	for(int i = 0; i < num_years; i++){
		cost = cost * inflation;
	}
	//output the estimated cost
	std::cout << "The estimated cost of the item in " << num_years << " years will be " << cost << std::endl;
	
	return 0;
}

