#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	cin>>n>>t;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int sum = 0;
	int k = 0;
	int c = 0;
	for(int i=0;i<n;i++)
	{
		sum+=v[i];
		if(sum<=t)
		{
			c++;
		}
		else{
			sum-=v[k];
			k++;
		}
	}
	
	cout<<c;
	return 0;
}
