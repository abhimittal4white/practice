#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int min = i;
		for(int j = i+1; j<n; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

int main()
{
	int arr[9] = {2, 29, 30, 5, 0, 16, 40, 4, 1};
	int n = 9;
	SelectionSort(arr, n);
	for(int k = 0; k< n; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;
	return 0;
}
