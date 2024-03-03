#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int FirstMoney = 50;
	int TargetMoney = 250;
	int CurMoney = FirstMoney;
	int NumWinning = 0;

	while (CurMoney > 0 && CurMoney < TargetMoney)
	{
		if (rand() % 2 > 0)
		{
			CurMoney ++;
			NumWinning++;
		}
		else 
		{
			CurMoney --;
		}
	}

	cout << CurMoney<<endl;
	cout << NumWinning<<endl;


	return 0;
}