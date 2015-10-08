#include <iostream>
using namespace std;

int main(){

    long long sum = 0;
    int tick = 0;
    bool prime;

    for(int i = 2; i <= 2000000; i++){
        prime = true;
        for(int n = 2; n <= i - 1; n++){
            if(i % n == 0){
                prime = false;
            }
        }
        if(prime){
            sum += i;
            cout << i << endl;
        }
    }

    cout << sum << endl;

    return 0;

}



