#include<iostream>
#include<conio.h>
using namespace std;
int rotateArray(int ar[] , int d , int n)
{
	int temp,i,j;
	for(i=0 ; i<d ; i++)
	{
		temp=ar[0];
		for(j=0 ; j<n-1 ; j++)
		{
			ar[j]=ar[j+1];
		}
		ar[n-1]=temp;
	}
}

void PrintArray(int ar[] , int n)
{
	for(int i=0 ; i<n ; i++)
	{
		cout<<" "<<ar[i]<<" ";
	}
} 

int main()
{
	int array[50],n,rotation;

	cout<<"\nEnter the number of elements in the Array(max 50): ";
	cin>>n;
	cout<<"\nEnter the array: \n";
	for(int i=0 ; i<n ; i++)
	{
		cin>>array[i];
	}
	cout<<"\nEnter the no of rotations: ";
	cin>>rotation;
	
	//call the rotation function
	rotateArray(array,rotation,n);
	PrintArray(array,n);
	return 0;
}
