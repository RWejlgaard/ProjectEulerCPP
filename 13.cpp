#include <iostream>
#include <gmp.h>
#include <gmpxx.h>
#include <math.h>
using namespace std;

int main(){

    double pi = boost::math::constants::pi<double>();

    cout << precision(100) << pi << endl;

    return 0;
}
