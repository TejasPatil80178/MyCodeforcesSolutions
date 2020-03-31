#include <bits/stdc++.h>
using namespace std;

int main() {
	bool b = 1;
	string s;
	cin>>s;
	int n = s.length();
	map<char,int> m;
	for(int i=0;i<n;i++)
	{
		m[s[i] - 'a']++;
	}
	int k = 0;
	for(int i=0;i<26;i++)
	{
		if(m[i]%2!=0)
		{
			k++;
		}
	}
	while(true)
	{
		if(n%2==0)
		{
			if(k==0)
			{
				if(b==1)
				{
					cout<<"First";
					return 0;
				}
				else{
					cout<<"Second";
					return 0;
				}
			}
			else{
				k--;
				n--;
				if(b==0)
				{
					b = 1;
				}
				else{
					b = 0;
				}
			}
		}
		else{
			if(k==1)
			{
				if(b==1)
				{
					cout<<"First";
					return 0;
				}
				else{
					cout<<"Second";
					return 0;
				}
			}
			else{
				k--;
				n--;
				if(b==0)
				{
					b = 1;
				}
				else{
					b = 0;
				}
			}
		}
	}
	
	return 0;
}
