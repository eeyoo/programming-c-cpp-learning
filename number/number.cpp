#include <iostream>
using namespace std;

int main()
{
	short s = 10;
	int i = 1000;
	long l = 1000000;
	float f = 230.47;
	double d = 3094.374;

	cout << sizeof(s) << " " << s << endl;
	cout << sizeof(i) << " " << i << endl;
	cout << sizeof(l) << " " << l << endl;
	cout << sizeof(f) << " " << f << endl;
	cout << sizeof(d) << " " << d << endl;

	/* output for my machine
	 * 2 100
	 * 4 1000
	 * 4 1000000
	 * 4 230.47
	 * 8 30949.374
	 */
	 
	return 0;
}