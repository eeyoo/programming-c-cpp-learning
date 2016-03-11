#include <iostream>
using namespace std;

int main()
{
    int var = 20;
    int *ip;

    ip = &var;  // pointer ip content is address of var
    cout << "Value of var variable: " << var << endl;

    cout << "Address stored in ip variable: " << ip << endl;
    cout << "Value of *ip variable: " << *ip << endl;
    cout << "Value of *(ip+1) variable: " << *(ip+1) << endl;

    return 0;
}