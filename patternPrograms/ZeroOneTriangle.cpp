/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
  
*/

#include<iostream>
using namespace std;

void ZeroOneTriangle(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))
			{
				cout << "1 ";
			}
			else
			{
				cout << "0 ";
			}
		}
		cout << endl;
	}
}

int main()
{
	ZeroOneTriangle(5);
	return 0;
}
