#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,min=INT_MAX,max=INT_MIN;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<m-1;j++)
		{
			if(arr[i][j]<min)
			min=arr[i][j];
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			if(arr[i][j]>max)
			max=arr[i][j];
		}
	}
	cout<<max-min<<endl;
	return 0;
}
