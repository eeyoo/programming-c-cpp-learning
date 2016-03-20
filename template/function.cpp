/*
 function template

 */
#include <iostream>
#include <string>
using namespace std;

template <typename T>
inline T const& Max(const T &a, const T &b) {
    return a>b ? a : b;
}

int main() {
    cout << "Max(1,2): " << Max(1,2) << endl;

    cout << "Max(12.3, 45.6): " << Max(12.3, 45.6) << endl;

    cout << "Max('Hello', 'World'): " << Max("Hello","World") << endl;
    return 0;
}
