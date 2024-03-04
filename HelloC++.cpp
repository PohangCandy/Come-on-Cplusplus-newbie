#include <iostream>

using namespace std;

void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	swap(a, b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;


	return 0;
}