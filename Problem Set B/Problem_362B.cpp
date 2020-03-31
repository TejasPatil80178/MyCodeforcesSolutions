#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	if(m==0)
	{
		cout<<"YES";
		return 0;
	}
	else{
		vector<int> v(m,0);
		for(int i=0;i<m;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		if(v[0]==1 || v[m-1]==n)
		{
			cout<<"NO";
			return 0;
		}
		for(int i=0;i<=m-3;i++)
		{
			bool b = (v[i+1]==v[i]+1) && (v[i+2]==v[i+1]+1);
			if(b)
			{
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
	}
	return 0;
}
