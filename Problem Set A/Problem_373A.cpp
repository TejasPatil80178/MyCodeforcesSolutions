#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin>>k;
	vector<string> v;
	for(int i=0;i<4;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	int b[10] = {0};
	for(int  i =0;i<4;i++)
	{
		for(int j = 0;j<4;j++)
		{
			if(v[i][j]!='.')
			{
				b[(int)(v[i][j] - '0')]++;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		if(b[i] > (2*k))
		{
			cout<<"NO";
			return 0;
		}
	}
	
	cout<<"YES";
	return 0;
}
