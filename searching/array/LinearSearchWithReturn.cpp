#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int item)
{
	for(int i = 0; i<n; i++)
	{
		if(arr[i] == item)
		{
			return i;
		}
	}
	return -1;
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
	
	int item;
	cout << "Enter a value to search in array: ";
	cin >> item;
	
	int inx = LinearSearch(arr, n, item);
	if(inx == -1)
	{
		cout << "Element not found!";
	}
	else
	{
		cout << "Element found at index: " << inx;
	}
	return 0;
}
