#include <iostream>

using namespace std;

int main(){
	long num = 600851475143;
	long survivor = 0;

	long x = 2;
	while((x * x) <= num){
		if ((num % x) == 0){
			num = num / x;
			survivor = x;
		}else{
			x++;
		}
	}
	if (num > survivor){
		survivor = num;
	}

	cout << survivor << endl;

	return 0;
}
