#include <iostream>
int main(){
	//prompt user for numbers
	std::cout << "Enter two numbers:" << std::endl;
	//initializes variables
	int v1 = 0, v2 = 0;
	//reads input
	std::cin >> v1 >> v2;
	//initializing variables along with determining the larger and smaller of two inputs
	int sum = 0, larger = v1 > v2? v1: v2, smaller = v1 < v2? v1: v2;
	//for loop that prints every number between the range of the two inputs
	for(int i = smaller; i <= larger; i++){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;

}
