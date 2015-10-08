#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){

    int count = 0;

    for(int a = 1; a < 1000; a++){
        for(int b = 1; b < 1000; b++){
            for(int c = 1; c < 1000; c++){
                if((a+b+c) == 1000){
                    if((pow(a,2)+pow(b,2)) == pow(c,2) && a<b){
                    cout << "a: " << a << endl;
                    cout << "b: " << b << endl;
                    cout << "c: " << c << endl << endl;
                    cout << "Product of abc: " << a*b*c << endl;
                    }
                }
            }
        }
    }

    return 0;
}
