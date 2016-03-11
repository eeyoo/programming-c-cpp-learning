/**
 * use tm struct format time
 */
#include <iostream>
#include <ctime>

 using namespace std;

 int main()
 {
    // get current date and time
    time_t now = time(0);

    cout << "Number of sec since Jan 1 1970: " << now << endl; //output 14 billion

    tm *ltm = localtime(&now);
    // all tm compose
    cout << "Year: " << 1900 + ltm->tm_year << endl;
    cout << "Month: " << 1 + ltm->tm_mon << endl;
    cout << "Day: " << ltm->tm_mday << endl;
    cout << "Time: " << ltm->tm_hour << ":";
    cout << 1 + ltm->tm_min << ":" << 1 + ltm->tm_sec << endl;

    return 0;
 }