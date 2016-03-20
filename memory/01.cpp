/*
 new and delete

 */
#include <iostream>
#include <exception>
using namespace std;

int main() {
    double *pvalue = NULL;
    pvalue = new double;  // alloc double type memory

    *pvalue = 23232.444;

    cout << "new double content is " << *pvalue << endl;
    delete pvalue;

    try {
        cout << *pvalue << endl;
    } catch(const char *msg) {
        cout << "error: " << msg << endl;
    }
    return 0;
}
