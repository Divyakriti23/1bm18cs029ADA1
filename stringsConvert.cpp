/*b) Given two text strings A of length n and B of length m, to transform A into B using a minimum number of operations of the
following types: delete a character from A, insert a character into A, or change some character in A into a new character.
The minimal number of such operations required to transform A into B is called the edit distance between A and B. 
For example, the edit distance(abbc, xbbacd) = 3 (change a to x; insert a after bb; insert d after c) Find a recurrence
relation that is useful to find the edit distance of two strings A and B. Take an example of two strings of which one is your own name,
and using
this relation, fill the table for the minimum number of operations.*/

#include <bits/stdc++.h> 
using namespace std; 

int min(int x, int y, int z) 
{ 
	return min(min(x, y), z); 
} 

int editDist(string str1, string str2, int m, int n) 
{
	if (m == 0) 
		return n; 

	if (n == 0) 
		return m; 

	if (str1[m - 1] == str2[n - 1]) 
		return editDist(str1, str2, m - 1, n - 1); 


	return 1 + min(editDist(str1, str2, m, n - 1), // Insert 
				editDist(str1, str2, m - 1, n), // Remove 
				editDist(str1, str2, m - 1, n - 1) // Replace 
				); 
} 

int main() 
{ 
	 
	string str1; 
	string str2; 
  cout<<"Enter 2 strings:";
  cin>>str1;
  cin>>str2;
	cout << editDist(str1, str2, str1.length(), str2.length()); 

	return 0; 
} 
