#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> v;
	for(int i =0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	int c = 0;
	int i=0;
	while(i<n&&k<m)
	{
		k = k + v[i] -1;
		c++;
		i++;
	}
	
	if(k>=m)
	{
		cout<<c;
	}
	else{
		cout<<-1;
	}
	return 0;
}
