#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	short  s = 10;
	int    i = -1000;
	long   l = 1000000;
	float  f = 230.47;
	double d = 200.374;

	cout << "sin(d) = " << sin(d) << endl;
	cout << "abs(i) = " << abs(i) << endl;
	cout << "floor(d) = " << floor(d) << endl;
	cout << "sqrt(f) = " << sqrt(f) << endl;
	cout << "pow(d, 2) = " << pow(d, 2) << endl;

	/* output for my machine
	 * sin(d) = -0.634939
	 * abs(i) = 1000
	 * floor(d) = 200
	 * sqrt(f) = 15.1812
	 * pow(d, 2) = 40149.7
	 */

	return 0;
}