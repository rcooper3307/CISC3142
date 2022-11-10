#include <iostream>
using namespace std;
//create rectangle class
public class Rectangle{
	public:
		float length;
		float width;
		void setLength(float f){
			length = f;
		}
		void setWidth(float f){
			width = f;
		}
		float perimeter(){
			return (length*2) + (width*2);
		}
		float area(){
			return length * width;

		}
		int sameArea(Rectangle){
			return Rectangle.area() == area()? 1: 0;
		}
}

int main(){
	Rectangle r1;
	Rectangle r2;
	r1.setLength(5);
	r1.setWidth(2.5);
	r2.setLength(5);
	r2.setWidth(18.9);

	cout << "the length of r1 is "<<  r1.length << ". the width of r1 is " << r1.width << endl;
	cout << "the length of r2 is " << r2.length << ". the width of r2 is " << r2.width << endl;
	cout << "the area of r1 is " << r1.area() << ". the perimeter of r1 is " << r1.perimeter() << endl;
	cout << "the area of r2 is " << r2.area() << ". the perimeter of r2 is " << r2.perimeter() << endl;
	if(r1.sameArea(r2) == 1)
		cout << "r1 and r2 have the same area" << endl;
	else
		cout << "r1 and r2 do not have the same area" << endl;
	r1.setLength(15);
	r1.setWidth(6.3);
	if(r1.sameArea(r2) == 1)
		cout << "r1 and r2 have the same area" << endl;
	else 
		cout << "r1 and r2 do not have the same area" << endl;


	

	return 0;
}


