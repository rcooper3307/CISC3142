//okay so ive gotta. get a number. split it into smaller numbers and then add those numbers
//first create a sum variable and a number variable. prompt the user to enter a number. that number gets stored in the num variable
//then, while that number is still greater than 0, mod that number by 10 and add the remainder to sum, then iterate the number by /= 10
//once you exit the loop, print the sum
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
	int sum = 0, num; //declare variables
	cout << "Enter input from file" << endl; //prompt user to enter number
	while(cin >> num){} //store input in num
	cout << "The number input was " << num << endl;
	while (num > 0){ //while the value of num is still greater than 0, mod num by 10, add the remainder to sum, and then divide num by 10 to get rid of the front number
		sum += num % 10;
		num /= 10;
		
	}
	cout << "The sum is " << sum << endl;
	return 0;
}
