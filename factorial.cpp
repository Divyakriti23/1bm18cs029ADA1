/* Write recursive programs for the following:
	a) Finding factorial of a given number*/

#include<iostream> 
using namespace std; 

unsigned int factorial(unsigned int n) 
{ 
	if (n == 0) 
	return 1; 
	return n * factorial(n - 1); 
} 

int main() 
{ 
	int num;
	cout << "Enter the number";
	cin >> num;
	cout << "Factorial of " << num << " is " << factorial(num) << endl; 
	return 0; 
} 

 

