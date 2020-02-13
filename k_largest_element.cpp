/*Write an efficient program for printing k largest elements in an array. Elements in the array can be in any order. It is given that all array elements are distinct.*/

#include <bits/stdc++.h> 
using namespace std;
void bubblesort(int arr[],int n)
{	int temp, k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Enter how many largest elements you want to print:";
	cin>>k;

	for(int i=0;i<k;i++)
		cout<<arr[i]<<"\t";
}

int main()
{	int n,ch;
	clock_t start, end; ;
	cout<<"Enter number of elements:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements:"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	bubblesort(arr,n);
  
	return 0;
}


