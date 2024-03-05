#include <iostream>
#include <string>

using namespace std;


int main()
{
	string First;
	string Second;
	int i = 0;
	int distance = 0;

	cout << "첫 번째 문자열을 입력하시오." << endl;
	getline(cin, First);
	cout << endl;
	cout << "두 번째 문자열을 입력하시오." << endl;
	getline(cin, Second);
	cout << endl;
	for (char word : First)
	{
		if (word != Second[i])
		{
			distance++;
		}
		i++;
	}
	cout << "해밍거리: " << distance;

	return 0;
}