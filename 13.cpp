#include <iostream>
#include <gmp.h>
#include "lib/InfInt.h"
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream file("../in/13");
    vector<string> strVec;
    string str;
    InfInt sum;

    while(getline(file,str)){
        strVec.push_back(str);
    }

    for(int i = 0; i < 100;i++){
        InfInt tmp = strVec[i];
        sum += tmp;
    }

    string sumStr = sum.toString();

    cout << sumStr.substr(0,10) << endl;

    return 0;
}
