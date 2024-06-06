/*

      1
    2 1 2
  3 2 1 2 3  
4 3 2 1 2 3 4

*/

#include<iostream>
using namespace std;

void PalindromeTriangular(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j=1; j<=n-i-1; j++)
		{
			cout << "  ";
		}
		for(int k = i; k >= 0; k--)
		{
			cout << k+1 << " ";
		}
		if(i>0)
		{
			for(int l = 1; l <= i; l++)
			{
				cout << l+1 << " ";
			}
		}
		
		cout << endl;
	}
}

int main()
{
	PalindromeTriangular(4);
	return 0;
}
