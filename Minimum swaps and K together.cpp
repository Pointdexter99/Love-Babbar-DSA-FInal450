#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n,k;cin>>n;int bad=0,cnt =0;vector<int> ans;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    cin>>k;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<=k)
	        cnt++;
	    }
	    for(int i=0;i<=(n-cnt);i++)
	    {
	        for(int j=i;j<(i+cnt);j++)
	        {
	            if(arr[j]>k)
	            bad++;
	        }
	        ans.push_back(bad);
	        bad=0;
	    }
	    int min =INT_MAX;
	    for(int i=0;i<ans.size();i++)
	    {
	        if(ans[i]<min)
	        min=ans[i];
	    }
	    cout<<min<<endl;
	}
	return 0;
}
