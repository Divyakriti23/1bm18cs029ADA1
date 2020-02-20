/* SElection Sort */


#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
int temp,min,i,j;
for(i=0;i<n-1;i++)
{ min=i;
for(j=i+1;j<n;j++)
{
if(arr[j]<arr[min])
{
min=j;
}
}
temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}
}
int main()
{
int n,ch,k,max,temp,i,j,n1,arr[100],arr1[100];
clock_t start, end;

cout<<"enter choice 1:selection sort 2:print k largest elements"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter number of elements in an array"<<endl;
cin>>n;

cout<<"Enter the array elements"<<endl;
for(int i=0;i<n;i++)
cin>>arr[i];
start = clock();
selectionsort(arr,n);
end = clock();
    for(int i=0;i<n;i++)
cout<<arr[i];

break;

case 2:

cout<<"Enter number of elements in an array"<<endl;
cin>>n1;

cout<<"Enter the array elements"<<endl;
for(int i=0;i<n1;i++)
cin>>arr1[i];
cout<<"enter the value of k"<<endl;
cin>>k;

for(i=0;i<k;i++)
{ max=i;
for(j=i+1;j<n1;j++)
{
if(arr1[j]>arr1[max])
max=j;

}
temp=arr1[i];
arr1[i]=arr1[max];
arr1[max]=temp;

}
for(int i=0;i<k;i++)
cout<<arr1[i];
break;
}
double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5);
    cout << " sec " << endl;
return 0;

}
