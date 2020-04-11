#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,s,f;
	cin>>n>>m>>s>>f;
	string a = "";
	int ti = 1;
	while(m>0 && s!=f)
	{
		int t,l,r;
		cin>>t;
		if(ti==t)
		{
			cin>>l>>r;
			if(l<=s && s<=r)
			{
				a+='X';
			}
			else if(f>s)
			{
				if(l<=s+1 && s+1<=r)
				{
					a+='X';
				}
				else{
					a+='R';
					s++;
					if(s==f)
					{
						cout<<a;
						return 0;
					}
				}
			}
			else{
				if(l<=s-1 && s-1<=r)
				{
					a+='X';
				}
				else{
					a+='L';
					s--;
					if(s==f)
					{
						cout<<a;
						return 0;
					}
				}
			}
			ti++;
		}
		else{
			while(ti!=t)
			{
				if(f>s)
				{
					a+='R';
					s++;
				}
				else if(f<s){
					a+='L';
					s--;
				}
				if(s==f){
					cout<<a;
					return 0;
				}
				ti++;
			}
		}
		m--;
	}
	while(s!=f)
	{
		if(f>s)
		{
			a+='R';
			s++;
		}
		else if(f<s){
			a+='L';
			s--;
		}
		if(s==f){
			cout<<a;
			return 0;
		}
	}
	return 0;
}
