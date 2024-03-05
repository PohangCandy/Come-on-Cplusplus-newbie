#include <iostream>
#include <string>

using namespace std;


int main()
{
	string Names[] = { "철수","영희","민철" };

	for (auto& name : Names)
	{
		int i = 0;
		cout << i << "번쨰 친구의 이름 : " << name << endl;
		i++;
	}

	return 0;
}