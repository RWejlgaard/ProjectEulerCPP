#include <iostream>

using namespace std;

int main(){
    bool found = false;
    int i = 2520;

    while(!found){
        i++;
        for(int x = 1; x <= 20;x++){
            if (i % x == 0){
                if(x == 20){
                    found = true;
                }
            }else{
                break;
            }
        }

    }

    cout << i << endl;

    return 0;
}
