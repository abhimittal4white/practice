#include<iostream>
using namespace std;

int DeleteAtPos(int arr[], int *n, int pos)
{
	int item = arr[pos];
	for(int i = pos; i < *n-1; i++)
	{
		arr[i] = arr[i+1];
	}
	(*n)--;
	return item;
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
	
	int item = DeleteAtPos(arr, &n, pos);
	
	cout << "\nDeleted element is: " << item << endl;
	cout << "Array after deletion:\n";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
