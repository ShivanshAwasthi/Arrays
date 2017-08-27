#include<iostream>
using namespace std;

void BubbleSortArray(int a[],int n)
{
	int temp;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j)
	}
	
}

void PrintArray(int a[],int n)
{
	for(int k=0 ; k<n ; k++)
	{
		cout<<" "<<a[k]<<" ";
	}
}

int main()
{
	int arr[50],n,i;
	
	cout<<"\nEnter the number of elements in the array: ";
	cin>>n;
	for(i=0 ; i<n ; i++)
	{
		cout<<"\nEnter the element "<<i+1<<" of the array: ";
		cin>>arr[i];
	}
	PrintArray(arr,n);
	cout<<"\n";
	BubbleSortArray(arr,n);
	PrintArray(arr,n);
}
