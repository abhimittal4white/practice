/*

1 2 3 4
1 2 3
1 2
1
  
*/

#include<iostream>
using namespace std;

void NumberIncreasingReversePyramid(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j=0; j<=n-i-1; j++)
		{
			cout << j+1 << " ";
		}
		cout << endl;
	}
}

int main()
{
	NumberIncreasingReversePyramid(4);
	return 0;
}
