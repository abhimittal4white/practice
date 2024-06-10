#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
	for(int i = 1; i<n; i++)
	{
		for(int j = i; j >=0; j--)
		{
			if(arr[j] < arr[j-1])
			{
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
}

int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array: ";
	for(int k=0;k<n;k++)
	{
		cin>>arr[k];
	}
	
	InsertionSort(arr, n);
	
	for(int k=0;k<n;k++)
	{
		cout<<arr[k] << " ";
	}
	cout<<endl;
	return 0;
	
}
