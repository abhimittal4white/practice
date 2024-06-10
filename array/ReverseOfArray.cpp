#include<iostream>
using namespace std;

void ArrayReverse(int arr[], int n)
{
	for(int i = 0; i < n/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}
}

int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array: ";
	for(int k=0;k<n;k++)
	{
		cin>>arr[k];
	}
	
	ArrayReverse(arr, n);
	
	for(int k=0;k<n;k++)
	{
		cout<<arr[k] << " ";
	}
	cout<<endl;
	return 0;
	
}
