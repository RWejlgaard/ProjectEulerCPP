#include <iostream>

using namespace std;

/*long collatz(int i, int c){
    if(i == 1){
        return c;
    }
    if (i % 2 == 0){
        c++;
        int out = collatz(i / 2,c);
        return out;
    }else{
        c++;
        int out = collatz((i * 3) + 1,c);
        return out;
    }

}*/

int main(){
    long survivor = 0;
    long c;
    long tmp = 0;

    for(long x=1;x<=1000000;x++){
        long i = x;
        tmp = 0;
        //cout << x << endl;
        while (i != 1){
            if(i % 2 == 0){
                i = i/2;
            }else{
                i = (i*3)+1;
            }
            tmp++;
        }
        if(tmp > survivor){
            cout << "Number: " << x << " with: " << tmp << " is now survivor" << endl;
        }
    }

    return 0;
}
