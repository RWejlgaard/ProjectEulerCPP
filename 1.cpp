#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vec;
    int total = 0;

    for(int x = 3; x < 1000; x += 3){
        vec.push_back(x);
        total+=x;
    }

    for(int y = 5; y < 1000; y += 5){
        if (find(vec.begin(), vec.end(), y) != vec.end()){
            //Do Nothing
        }else{
            total += y;
        }
    }

    cout << total << endl;

    return 0;
}
