#include<iostream>
using namespace std;

void InsertAtPos(int arr[], int *n, int pos, int val)
{
	for(int i = *n-1; i>=pos; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos] = val;
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
	
	int pos;
	cout << "Enter the position where element should be inserted: ";
	cin >> pos;
	
	int val;
	cout << "Enter element to be inserted: ";
	cin >> val;
	
	InsertAtPos(arr, &n, pos, val);
	
	cout << "Array after insertion:\n";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
