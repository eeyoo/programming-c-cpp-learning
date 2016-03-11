#include <iostream>

using namespace std;

int main()
{
    int var1;
    char var2[20] = "Hello world";

    cout << "var1 address: " << &var1 << endl;
    cout << "var2 address: " << &var2 << endl;
    cout << "var2 array 0: " << var2[0] << endl;

    return 0;
}