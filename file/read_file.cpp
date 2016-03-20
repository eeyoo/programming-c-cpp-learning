/*
 读取文件信息

 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char data[100]; // for read data

    ifstream infile;
    infile.open("afile.dat");
    cout << "read data from file." << endl;
    infile >> data; // terminate when hit an white character

    cout << "file content: " << data << endl;

    infile.close();
    return 0;
}
