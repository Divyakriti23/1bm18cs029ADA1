/* Write recursive programs for the following:
	b) Finding nth Fibonacci number */

#include<iostream>
using namespace std; 

unsigned int fib(unsigned int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return ((fib(n-1)+fib(n-2)));
}
int main()
{
	int num;
	cout <<"Enter n value";
	cin >> num;
	cout << fib(num);
	return 0;
}
