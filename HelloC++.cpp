#include <iostream>
#include <string>

using namespace std;

class Circle {
public:
	int radius;
	string color;

	double clacArea();
};

double Circle::clacArea() {
	return 3.14 * radius * radius;
};


int main()
{
	Circle num1;
	num1.radius = 10;
	num1.color = "blue";

	cout << "num1의 면적은: " << num1.clacArea();

}