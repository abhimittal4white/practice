#include<iostream>
using namespace std;

void InsertAtEnd(int arr[], int *n, int val)
{
	arr[*n] = val;
	(*n)++;
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
	
	int val;
	cout << "Enter element to be inserted at the end of the array: ";
	cin >> val;
	
	InsertAtEnd(arr, &n, val);
	
	cout << "Array after insertion at the end of the array:\n";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
