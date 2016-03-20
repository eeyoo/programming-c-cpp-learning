/*
 new and delete for array

 */
#include <iostream>
#include <exception>
using namespace std;

int main() {
    double **p = NULL;
    //p = new double [3][4];
    double d = 333.333;

    p[0][0] = d;
    cout << **p << endl;

    delete [] p;
    return 0;
}
