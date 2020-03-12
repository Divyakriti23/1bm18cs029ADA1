/*Write program to obtain the Topological ordering of vertices in a given digraph*/

#include<iostream>
 
using namespace std;
 
int main(){
	int i,j,k,n,a[10][10],indeg[10],flag[10],count=0;
 
	cout<<"Enter the no of vertices:\n";
	cin>>n;
 
	cout<<"Enter the adjacency matrix:\n";
	for(i=0;i<n;i++){
		cout<<"Enter row "<<i+1<<"\n";
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
 
	for(i=0;i<n;i++){
        indeg[i]=0;
        flag[i]=0;
    }
 
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            indeg[i]=indeg[i]+a[j][i];
            cout<<"\nThe topological order is:";
 
    while(count<n){
        for(k=0;k<n;k++){
            if((indeg[k]==0) && (flag[k]==0)){
                cout<<k+1<<" ";
                flag[k]=1;
            }
 
            for(i=0;i<n;i++){
                if(a[i][k]==1)
                    indeg[k]--;
            }
        }
 
        count++;
    }
 
    return 0;
}

/*Output
Enter the no of vertices:
4
Enter the adjacency matrix:
Enter row 1
0 1 1 0
Enter row 2
0 0 0 1
Enter row 3
0 0 0 1
Enter row 4
0 0 0 0
The topological order is:1 2 3 4
*/
