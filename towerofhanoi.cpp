#include<iostream>
using namespace std;
void tower(int n,char src,char temp,char dest);
int main()
{
	int num;
	cout<<"Enter the number of discs";
	cin>>num;
	tower(num,'A','B','C');
	return 0;
}
void tower(int n,char src,char temp,char dest)
{
	if(n==1)
	{
		cout<<"move %d disc from %c to %c"<<n,src,dest<<endl;
	}
	else
	{
		tower(n-1,src,dest,temp);
		cout<<"move %d disc from %c to %c"<<n,src,dest<<endl;
		tower(n-1,temp,src,dest);
	}
}

