#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v;
	int sum = 0;
	int k = 1;
	while(n>0)
	{
		int x,y;
		cin>>x>>y;
		if(y==0)
		{
			v.push_back(x);
		}
		else{
			k--;
			sum+=x;
			k+=y;
		}
		n--;
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	int  i = 0;
	while(k>0 && i<v.size())
	{
		sum+=v[i];
		i++;
		k--;
	}
	
	cout<<sum;
	return 0;
}
