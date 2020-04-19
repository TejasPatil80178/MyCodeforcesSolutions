#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	map<char,int> m;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='n' || s[i]=='i' || s[i]=='e' || s[i]=='t')
		{
			m[s[i]]++;
		}
	}
	int i=0;
	//cout<<m['n']<<" "<<m['i']<<" "<<m['e']<<" "<<m['t']<<" "<<i<<endl;
	while(m['n']>=(3-i) && m['i']>=1 && m['e']>=3 && m['t']>=1)
	{
		m['n']-=3;
		m['i']-=1;
		m['e']-=3;
		m['t']-=1;
		i++;
		//cout<<m['n']<<" "<<m['i']<<" "<<m['e']<<" "<<m['t']<<" "<<i<<endl;
	}
	cout<<i;
	return 0;
}
