#include<iostream>
using namespace std;

void DeleteAtPos(int arr[], int *n, int pos)
{
	for(int i = pos; i < *n-1; i++)
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
	
	int pos;
	cout << "Enter the position: ";
	cin >> pos;
	
	DeleteAtPos(arr, &n, pos);
	
	cout << "Array after deleting at the beginning of the array:\n";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
