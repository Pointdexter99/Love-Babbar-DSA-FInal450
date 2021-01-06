#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,min=INT_MAX,max=INT_MIN;
	cin>>n>>m;
	int arr[n][m];
	int ans[m][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int r=0,c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			ans[r][c]=arr[j][i];
			c++;
		}
		r++;c=0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
