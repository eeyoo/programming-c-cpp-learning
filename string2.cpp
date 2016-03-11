#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    // copy str1 to str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;

    // connect str1 to str2
    str3 = str1 + str2;
    cout << "str3 : " << str3 << endl;

    // get length of str3
    len = str3.size();
    cout << "str3.size() : " << len << endl;

    return 0;
}