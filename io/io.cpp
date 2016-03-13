#include <iostream>

using namespace std;

int main()
{
    char name[50];

    cout << "Please enter your name: ";
    cin >> name;
    //cout << '\0';
    //name = "Hello world";
    cout << "Ok, your name is: " << name << endl;
    return 0;
}