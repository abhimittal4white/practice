#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j <n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	int arr[9] = {2, 29, 30, 5, 0, 16, 40, 4, 1};
	int n = 9;
	BubbleSort(arr, n);
	for(int k = 0; k< n; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;
	return 0;
}
