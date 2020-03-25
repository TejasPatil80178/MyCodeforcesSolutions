#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1;
	string s2;
	cin>>s1>>s2;
	int n = s1.length();
	if(s1.length()!=s2.length())
	{
		cout<<"NO";
	}
	else{
		vector<int> a(26,0);
		vector<int> b(26,0);
		for(int i=0;i<n;i++)
		{
			a[(int)(s1[i]-'a')]++;
			b[(int)(s2[i]-'a')]++;
		}
		for(int i =0;i<26;i++)
		{
			if(a[i]!=b[i])
			{
				cout<<"NO";
				return 0;;
			}
		}
		int c = 0;
		for(int i=0;i<n;i++)
		{
			if(s1[i]!=s2[i])
			{
				c++;
			}
		}
		if(c==2)
		{
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	return 0;
}
