#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.length()-1;
	int k = n;
	for(int i=0;i<n;i++)
	{
		if((int)(s[i]-'0')%2==0)
		{
			k = i;
			if(s[n] > s[i])
			{
				break;
			}
		}
	}
	if(k==n)
	{
		cout<<-1<<endl;
	}
	else{
		char t = s[k];
		s[k] = s[n];
		s[n] = t;
		cout<<s;
	}
	
	return 0;
	
}
