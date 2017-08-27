#include<iostream>
using namespace std;

void ReverseArray(int ar[],int n)
{
	int temp,i;
	for(i=0 ; i<n/2 ; i++)
	{
		temp=ar[i];
		ar[i]=ar[n-1-i];
		ar[n-1-i]=temp;
	}
}

void PrintArray(int ar[],int n)
{
	for(int i=0 ; i<n ; i++)
	{
		cout<<" "<<ar[i]<<" ";
	}
}

int main()
{
	int array[50],num,i;
	
	cout<<"\nEnter the number of elements in the array: ";
	cin>>num;
	cout<<"\nEnter the array:\n";
	for(i=0 ; i<num ; i++)
	{
		cin>>array[i];
	}
	
	ReverseArray(array,num);
	PrintArray(array,num);
	return 0;
}

