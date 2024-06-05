#include<iostream>
using namespace std;

void DeleteAtEnd(int arr[], int *n)
{
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
	
	DeleteAtEnd(arr, &n);
	
	cout << "Array after deleting at the end of the array:\n";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
