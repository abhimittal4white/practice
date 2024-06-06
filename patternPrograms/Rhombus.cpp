/*

* * * * *
 * * * * *
  * * * * *
   * * * * *
    * * * * *

*/

#include<iostream>
using namespace std;

void Rhombus(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j=0; j<i; j++)
		{
			cout << " ";
		}
		for(int k = 0; k < n; k++)
		{
			cout << "* ";
		}
		
		cout << endl;
	}
}

int main()
{
	Rhombus(5);
	return 0;
}
