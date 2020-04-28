/* a)Implement “Sum of Subsets” using Backtracking. “Sum of Subsets” problem: Find a subset of a given set S = {s1,s2,……,sn} of n positive
integers whose sum is equal to a given positive integer d. For example, if S = {1,2,5,6,8} and d = 9 there are two solutions {1,2,6} and
{1,8}. A suitable message is to be displayed if the given problem instance doesn’t have a solution.*/

#include <stdio.h> 

bool isSubsetSum(int set[], int n, int sum) 
{ 

if (sum == 0) 
	return true; 
if (n == 0 && sum != 0) 
	return false; 
 
if (set[n-1] > sum) 
	return isSubsetSum(set, n-1, sum); 

return isSubsetSum(set, n-1, sum) || 
						isSubsetSum(set, n-1, sum-set[n-1]); 
} 

int main() 
{ 
  int n;
  cout<<"Enter number of elements:";
  cin>>n;
  int set[n];
  int sum = 0;
  cout<<"Enter the sum: ";
  cin>>sum;
  cout<<"Enter the elements of the set:"<<endl;
  for(int i=0;i<n;i++)
    cin>>set[i];
  if (isSubsetSum(set, n, sum) == true) 
    cout<<"Found a subset with given sum"; 
  else
    cout<<"No subset with given sum"; 
  return 0; 
} 


/*Output

Enter number of elements: 6
Enter the sum: 9
Enter the elements of the set:
5 3 2 7 1 4
Found a subset with given sum
*/


