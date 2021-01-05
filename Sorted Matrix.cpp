#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;int arr[n][n],c=0,temp[n*n];
	    for(int i=0;i<n;i++)
	    {for(int j=0;j<n;j++)
	    {
	        cin>>arr[i][j];
	    }
	    }
	    for(int i=0;i<n;i++)
	    {for(int j=0;j<n;j++)
	    {
	        temp[c]=arr[i][j];
	        c++;
	    }}
	    sort(temp, temp+(n*n));
	    for(int j=0;j<c;j++)
	    {
	        cout<<temp[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
