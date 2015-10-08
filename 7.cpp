#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

    vector<bool> vec;

    for(int i=0;i<1000;i++){
        vec.push_back(true);
    }

    vec[0] = false;
    vec[1] = false;

    for(int x=4;x<=vec.size();x+=2){
        vec[x] = false;
    }

    for(int x=6;x<=vec.size();x+=3){
        vec[x] = false;
    }

    for(int x=10;x<=vec.size();x+=5){
        vec[x] = false;
    }

    for(int x=14;x<=vec.size();x+=7){
        vec[x] = false;
    }

    for(int i=0;i<1000000;i++){
        if(vec[i] == true){
            cout << i << endl;
        }
    }

    return 0;
}
