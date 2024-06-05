#include<iostream>
using namespace std;

void DeleteAtBeg(int arr[], int *n)
{
	for(int i = 0; i < *n-1; i++)
	{
		arr[i] = arr[i+1];
	}
	(*n)--;
}

int main()
{
	int n;
	cout << "Enter the length of the array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elements of the array: ";
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	DeleteAtBeg(arr, &n);
	
	cout << "Array after deleting at the beginning of the array:\n";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
