#include "Zaman.h"
#include <iostream>
using namespace std;
int main()
{
	Zaman z;
	cout << "Baslangic zamani: ";
	z.ZamaniYazdir();
	z.ZamaniAyarla(13, 27, 6);
	cout << "Yeni Zaman : ";
	z.ZamaniYazdir();
	return 0;
}