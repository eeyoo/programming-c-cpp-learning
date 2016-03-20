#include <iostream>
//#include <stdint.h> //uint_t definition
using namespace std;

typedef unsigned char quint8;

struct Data
{
	quint8 id;
	quint8 data[4];
	quint8 end;
};

#define Hello
#define World

#ifdef Hello

#define NUM 0

#elif defined World

#define NUM 1

#endif

int main()
{
	//char *a = 'A';
	//char b = 0x02;
	//char *b1;
	//b1 = &b;
	//cout << "char b: " << *b1 << endl;

	cout << "NUM = " << NUM << endl;

	/*
	quint8 data[10];

	for(int i=0; i < sizeof(data); i++) {
		data[i] = 2*i+1;
		cout << i << '\t' << data[i] << endl;
	}
	*/

	return 0;
}