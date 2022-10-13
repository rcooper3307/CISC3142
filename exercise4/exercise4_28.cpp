/*
 * include<iostream>
 * using std::cout;
 * using std::endl;
 *
 * cout << "The space required to hold an int object is " << sizeof int << " bytes" << endl;
 * cout << "The space required to hold a char object is " << sizeof char << " bytes" << endl;
 * cout << "The space required to hold a long object is " << sizeof long << " bytes" << endl;
 * cout << "The space required to hold a short object is " << sizeof short << "bytes" << endl;
 *
 *
 *
 *
 */
#include<iostream>
using std::cout;
using std::endl;

int main(){

	cout << "The space required to hold an int object is " << sizeof(int) << " bytes." << endl;
	cout << "The space required to hold a float object is " << sizeof(float) << " bytes." << endl;
	cout << "The space required to hold a long object is " << sizeof(long) << " bytes." << endl;
	cout << "The space required to hold a char object is " << sizeof(char) << " bytes." << endl;
	cout << "The space required to hold a double object is " << sizeof(double) << " bytes." << endl;
	return 0;

}
