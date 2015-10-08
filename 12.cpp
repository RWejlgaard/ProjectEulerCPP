#include <iostream>

using namespace std;

int main(){
    bool match = false;
    long long i = 0;
    while(!match){
        cout << "Progress: " << i << endl;
        int factorCount = 0;
        for(long long n = 2; n <= i - 1; n++){
            if(i % n == 0){
                if(factorCount > 500){
                    match = true;
                }else{
                    factorCount++;
                }
            }
        }
        i++;
    }
    cout << "Answer: " << i << endl;
    return 0;
}
