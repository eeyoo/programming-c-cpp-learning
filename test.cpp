#include <iostream>
using namespace std;

int main()
{
	//char *a = 'A';
	char b = 0x02;
	char *b1;
	b1 = &b;
	cout << "char b: " << *b1 << endl;


	return 0;
}