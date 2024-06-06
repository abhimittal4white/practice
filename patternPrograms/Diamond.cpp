/*

      *
    *   *
  *   *   *
*   *   *   *
  *   *   *
    *   *
      *

*/

#include<iostream>
using namespace std;

void Diamond(int n)
{
	for(int i = 0; i < n; i++)  // upper half triangle
	{
		for(int j=i; j<n-1; j++)
		{
			cout << "  ";
		}
		for(int k = 0; k <= i; k++)
		{
			if(k%2==0)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		if(i>0)
		{
			for(int l = i; l>=0; l--)
			{
				if(l%2!=0)
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
	
	for(int o=0; o<n-1; o++)  // lower half triangle
	{
		for(int p=0; p<=o; p++)
		{
			cout << "  ";
		}
		for(int q=0; q<n-1-o; q++)
		{
			if(q%2==0)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		if(o<n-1)
		{
			for(int r=n-o-2; r>=0; r--)
			{
				if(r%2==0)
				{
					cout << "  ";
				}
				else
				{
					cout << "* ";
				}
			}
		}
		cout << endl;
	}
}

int main()
{
	Diamond(4);
	return 0;
}
