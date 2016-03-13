#include <iostream>

using namespace std;

class PrintData
{
public:
	void print(int i) {
		cout << "Printing int: " << i << endl;
	}

	void print(double f) {
		cout << "Printing float: " << f << endl;
	}

	void print(char *c) {
		cout << "Printing character: " << c << endl;
	}
};

int main()
{
	PrintData pd;
	pd.print(100);
	pd.print(0.38f);
	pd.print("Hello World!");
	return 0;
}