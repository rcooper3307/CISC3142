//need to print all the prime numbers from 1-300
//create a for loop from 1 to 300 where if i % 2 != 0, it prints the value of i.
#include <iostream>
using std::cout;
using std::endl;

int main(){
	for(int i = 2; i < 300; i++){ //create a for loop from 2-300
		bool is_prime = true;
		for(int j = 2; j <= i/2 ; j++){ //divide i by prime numbers from 2 to i/2. if at any point the remainder of i%j is zero, it does not get printed. if it can get through the whole thing, then print i.
			if(i % j == 0)
				is_prime = false;

		}
		if(is_prime == true)
			cout << i << endl;
	}
	return 0;
}
