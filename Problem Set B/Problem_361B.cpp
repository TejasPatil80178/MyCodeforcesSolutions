#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	if(k>=n)
	{
		cout<<-1;
		return 0;
	}
	vector<int> v(n+1,0);
	for(int i=1;i<=n;i++)
	{
		v[i] = i;
	}
	k = n-k-1;
	if(k>=1)
	{
		swap(v[n],v[1]);
		k--;
	}
	int i = n;
	while(k>0){
		swap(v[i],v[i-1]);
		i--;
		k--;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<v[i]<<" ";
	}
	
	
	return 0;
}
