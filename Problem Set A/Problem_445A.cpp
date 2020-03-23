#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<string> v;
	for(int  i=0;i<n;i++){
		string temp;
		cin>>temp;
		v.push_back(temp);
	}
	for(int i =0;i<n;i++)
	{
		for(int j =0;j<m;j++)
		{
			if(v[i][j]!='-')
			{
				if((i+j)%2==0)
				{
					v[i][j] = 'B';
				}
				else{
					v[i][j] = 'W';
				}
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<v[i][j];
		}
		cout<<endl;
	}
	return 0;
}
