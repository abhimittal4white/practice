/*

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
  
*/

#include<iostream>
using namespace std;

void NumberTriangular(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j=i; j<n; j++)
		{
			cout << " ";
		}
		for(int k=0; k<=i; k++)
		{
			cout << i+1 << " ";
		}
		cout << endl;
	}
}

int main()
{
	NumberTriangular(5);
	return 0;
}
