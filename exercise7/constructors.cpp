#include <iostream>
using namespace std;
public class Sample {
	private:
		int x;
		double y;
	public:
		Sample(){
			x = 0;
			y = 0;
		}
		Sample(int i){
			x = i;
		}
		Sample(int i, int j){
			x = i;
			y = j;
		}
		Sample(int i, double j){
			x = i;
			y = j;
		}
}

int main(){
	return 0;
}	
