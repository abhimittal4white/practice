#include<iostream>
using namespace std;

void LinearSearch(int arr[], int n, int item)
{
	int isFound = 0;
	for(int i = 0; i<n; i++)
	{
		if(arr[i] == item)
		{
			cout << "Element found at index: " << i;
			isFound = 1;
			break;
		}
	}
	if(isFound == 0)
	{
		cout << "Element not found!";
	}
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
	
	LinearSearch(arr, n, item);
	return 0;
}
