#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i=0;
	while(i<n)
	{
		if(s[i]=='R')
		{
			cout<<i+1<<" ";
			while(s[i]=='R')
			{
				i++;
			}
			if(s[i]=='L')
			{
				cout<<i;
				return 0;
			}
			else{
				cout<<i+1;
				return 0;
			}
		}
		if(s[i]=='L')
		{
			cout<<i+1<<" "<<i;
			return 0;
		}
		i++;
		
	}
}
