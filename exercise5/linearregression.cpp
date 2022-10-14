//declare int variables x, y, xsum, ysum, count
//declare vector<int> xval, yval
//declare vector<double> numsum, denomsum
//declare double variables xmean, ymean, numerator, denominator, intercept, linear_regression
//create a while loop to read in values to x and y until the input file is empty
//while in the loop, add the x and y values to their respective vectors and sums, then increase count by 1
//when out of the loop, initialize xmean and ymean to their respective sums divided by the count 
//create a range for loop that for every item in the xval array, it subtracts the value of xmean from it, multiplies that value by itself, and then adds that value to denominator
// create a range for loop that for every item in the x and yval arrays, it subtracts the value of x and ymean from it before multiplying those two new x and y values with each other, then adding their total sum to numerator
// then, calculate the slop by dividing numerator by the denominator
// calculate the intercept by subtracting the product of the slop and xmean from ymean
// calculate the linear regression by adding the product of the slope and x to the intercept.
#include <iostream>
#include <vector>
#include<math.h>

using namespace std;

int main(){
	//initialize variables
	int x, y, count = 0;
	double xsum, ysum, xmean, ymean, numerator, denominator, slope, intercept;
	vector<int> xval, yval;
	vector<double> numsum, denomsum;

	//create a while loop to read in values to x and y until the input file is empty
	while( cin >> y >> x){
		//while in loop, add x and y values to respective vectors and sums, then increase count by 1
		xval.push_back(x);
		yval.push_back(y);
		xsum += x; 
		ysum += y; 
		count++; //count is the number of items in each array

	}
	//initialize xmean and ymean to their respective sums divided by the count
	xmean = xsum/count; 
	ymean = ysum/count;
	//create a range-for loop that for every item in the xval array, it subtracts the value of xmean from it, multiplies that value by itself, and then adds that value to denominator
	for(int &i : xval){
		denominator += pow((i - xmean),2);
	}

	//create a for loop that sets i = 0 and continues while i < count that for every item in the xval and yval arrays, subtracts the value of xmean and ymean respectively from the value of the number stored at the index in that array before finding the product of those differences and then adding it to numerator
	for(int i = 0; i < count ; i++){
		double difference1 = xval[i] - xmean;
		double difference2 = yval[i] - ymean;
		numerator += difference1 * difference2;
	}

	//calculate the slope by dividing the numerator by the denominator
	slope = numerator / denominator;
	//calculate the intercept by subtracting the product of the slope and xmean from ymean
	intercept = ymean - (slope * xmean);
	//calculate the linear regression equation by adding the product of the slope and x to the intercept.
	cout << "The linear regression equation is Ŷ = " << intercept << " + " << slope << "x" << endl;
	return 0;

}

