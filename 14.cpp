#include <iostream>

using namespace std;

int main(){
    long survivor = 0;
    long c;
    long tmp = 0;

    for(long x=1;x<=1000000;x++){
        long i = x;
        tmp = 0;
        while (i != 1){
            if(i % 2 == 0){
                i = i/2;
            }else{
                i = (i*3)+1;
            }
            tmp++;
        }
        if(tmp > survivor){
            survivor = tmp;
            c = x;
        }
    }

    cout << c << endl;

    return 0;
}
