#include <iostream>
#include "conio.h"
using namespace std; 

int main()
{
	double n;
	cout << "Nhap vao so tien o dang USD: ";
	cin >> n;
	double a = n * 23000;

	cout << "\nSo tien sau khi chuyen sang dang VND la: " << a << " VND ";
	_getch();
	return 0;
}
