#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int m=0,b=0,final=1;
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0'&&b>0)
		{
			if(m==b)
			{
			final++;m=0;b=0;}
			
			m++;	
		}
		else if(s[i]=='0'&&b==0)
		m++;
		
		else if(s[i]=='1')
		b++;
	}
	cout<<final<<endl;
	return 0;
}
