#include<iostream>
using namespace std;

int DeleteAtEnd(int arr[], int *n)
{
	int item = arr[*n-1];
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
	
	int item = DeleteAtEnd(arr, &n);
	
	cout << "\nDeleted element is: " << item << endl;
	cout << "Array after deletion:\n";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
