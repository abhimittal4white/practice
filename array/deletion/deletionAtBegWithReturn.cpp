#include<iostream>
using namespace std;

int DeleteAtBeg(int arr[], int *n)
{
	int item = arr[0];
	for(int i = 0; i < *n-1; i++)
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
	
	int item = DeleteAtBeg(arr, &n);
	
	cout << "\nDeleted element is: " << item << endl;
	cout << "Array after deleting at the beginning of the array:\n";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
