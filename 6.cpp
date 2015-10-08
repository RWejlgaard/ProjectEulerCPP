#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int sum = 0;
    int sum2 = 0;

    for(int x = 1; x <= 100; x++){
        sum += pow(x,2);
    }
    for(int y = 1; y <= 100; y++){
        sum2 += y;
    }
    sum2 = pow(sum2,2);

    cout << (sum2 - sum) << endl;

    return 0;
}
