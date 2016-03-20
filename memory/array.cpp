/*
 new and delete for array

 */
#include <iostream>
#include <exception>
using namespace std;

int main() {
    char **array = NULL;
    array = new char[10][10];

    try {
        //array[0] = "Hello World";
    } catch(const char* msg) {
        cout << msg << endl;
    }
    //cout << array[0] << endl;

    delete [] array;
    return 0;
}
