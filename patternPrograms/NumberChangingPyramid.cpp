/*

1
2 3
4 5 6
7 8 9 10
  
*/

#include<iostream>
using namespace std;

void NumberChangingPyramid(int n)
{
	int num=1;
	for(int i = 0; i < n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout << num++ << " ";
		}
		cout << endl;
	}
}

int main()
{
	NumberChangingPyramid(4);
	return 0;
}
