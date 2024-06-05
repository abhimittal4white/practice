#include<iostream>
using namespace std;

void BinarySearch(int arr[], int n, int item)
{
	int lb = 0;
	int ub = n-1;
	int isFound = 0;
	while(lb <= ub)
	{
		int mid = (lb+ub)/2;
		if(arr[mid] == item)
		{
			cout << "Element found at index: " << mid;
			isFound = 1;
			break;
		}
		else if(arr[mid] < item)
		{
			lb = mid + 1;
		}
		else
		{
			ub = mid - 1;
		}
	}
	if(isFound == 0)
	{
		cout << "Element not found! ";
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
	
	BinarySearch(arr, n, item);
	
	return 0;
}
