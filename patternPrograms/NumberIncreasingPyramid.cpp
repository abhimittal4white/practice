/*

1
1 2
1 2 3
1 2 3 4
  
*/

#include<iostream>
using namespace std;

void NumberIncreasingPyramid(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout << j+1 << " ";
		}
		cout << endl;
	}
}

int main()
{
	NumberIncreasingPyramid(4);
	return 0;
}
