/**
 * return current date and time
 */
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0);

    char *dt = ctime(&now);

    cout << "Current data and time: " << dt << endl;

    // convert now to tm struct
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC date and time: " << dt << endl;
}