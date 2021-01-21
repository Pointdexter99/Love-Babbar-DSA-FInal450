#include<bits/stdc++.h>
using namespace std;
void helper(char a, string b)
{
	int n=b.size();
	
	for(int i=0;i<n;i++)
	{
		string c(1,a);
		string d(1,a);
		
		
		cout<<a<<b[i]<<endl;
		strcat(c,e);
		
		string s = b.substr(i,n-i);
		strcat(d,s);
		
		if(c!=d)
		cout<<d<<endl;
		else
		continue;
	}
}
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		string s1 = s.substr(i+1, n-1-i);
		cout<<s[i]<<endl;
		helper(s[i], s1);
	}
	return 0;
}
