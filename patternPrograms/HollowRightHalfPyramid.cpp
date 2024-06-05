/*

*
* *
*   *
*     *
* * * * *
  
*/

#include<iostream>
using namespace std;

void HollowRightHalfPyramid(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(i==0 || i==n-1 || j==0 || i==j)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}

int main()
{
	HollowRightHalfPyramid(5);
	return 0;
}
