#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    int survivor = 0;

    for(int x=100; x< 1000; x++){
        for(int y=100; y< 1000; y++){
            int z = x*y;

            string zStr;
            ostringstream tmp;
            tmp << z;
            zStr = tmp.str();

            string zStrRev = zStr;
            reverse(zStrRev.begin(),zStrRev.end());

            if(zStr == zStrRev){
                if(z > survivor){
                    survivor = z;
                }
            }

        }
    }

    cout << survivor << endl;

    return 0;
}
