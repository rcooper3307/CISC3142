/*
 * include vector
 * include iostream
 *
 * create a vector<int> test(10)
 *
 * create a for loop from 0 to 9 and change the value from the vector index of that number to two times the value of the index
 *
 * print the vectors
 * 
 * 
*/

#include<iostream>
#include<vector>
using std::vector;

int main(){
	vector<int> test(10);
	for(int i = 0; i < 10; i++){
		test[i] = i * 2;
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}

