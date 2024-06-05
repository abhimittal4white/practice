#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int item)
{
	int lb = 0;
	int ub = n-1;
	while(lb <= ub)
	{
		int mid = (lb+ub)/2;
		if(arr[mid] == item)
		{
			return mid;
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
	
	int inx = BinarySearch(arr, n, item);
	
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
