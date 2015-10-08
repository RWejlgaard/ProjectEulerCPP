#include <iostream>

using namespace std;

int fib(int i);

int main(){
    int sum = 0;
    int tmp;
    int x = 1;

    while (tmp < 4000000){
        tmp = fib(x);
        if(tmp % 2 == 0){
            sum += tmp;
        }
        x++;
    }

    cout << sum << endl;

    return 0;
}

int fib(int i){
    if (i == 0) return 0;
    if (i <= 2) return 1;

    int out = fib(i - 1) + fib(i - 2);
    return out;
}
