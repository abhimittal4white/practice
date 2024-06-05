#include<iostream>
using namespace std;

void InsertBeg(int arr[], int *n, int val)
{
	for(int i = *n-1; i>=0; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[0] = val;
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
	cout << "Enter element to be inserted at the beginning of the array: ";
	cin >> val;
	
	InsertBeg(arr, &n, val);
	
	cout << "Array after inserting at the beginning of the array:\n";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
