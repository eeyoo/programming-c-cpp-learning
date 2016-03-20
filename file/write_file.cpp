/*
 读取/写入文件操作

 */
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char data[100]; //100 bytes for character operation

    ofstream outfile;
    outfile.open("afile.dat", ios::out | ios::app);
    //outfile << "Hello World!" << endl;
    //outfile << "Beautiful world" << endl;
    cout << "write data to file." << endl;
    cout << "enter your name or other information: ";
    cin.getline(data, 100);

    // write data to file
    outfile << data << endl;

    outfile.close();
    //cout << (outfile.close() ? "file closed" : "file unclosed.") << endl;
}
