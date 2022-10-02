#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
//initialize variables
int main(){

	string text;
	vector<string> words; 
	std::cout << "Enter words and type 'stop' to stop" << std::endl;
	// read words into vector and add them to it
	while ((std::cin >> text)&&(text != "stop")){
		words.push_back(text);

	}	

	// for every word in the vector, turn it to uppercase
	int counter = 0;
	for (auto &i: words){
 		for (auto &c : text){
			c = toupper(c);
		}
	 	std::cout << i << " ";
		counter++;
		if (counter == 8){
			std::cout << std::endl;
			counter = 0;
		}	
	}	
	std::cout << std::endl;
	return 0;
}
 //print out each word in the vector, creating a newline after every 8 elements from the vector
 
