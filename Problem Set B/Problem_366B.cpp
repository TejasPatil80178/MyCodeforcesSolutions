#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n,k;
	cin>>n>>k;
	ll k1 = k;
	vector<ll> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	ll min = INT_MAX;
	ll i=0;
	ll c = -1;
	while(k1>0)
	{
		ll j = i;
		ll sum = 0;
		while(j<n)
		{
			sum+=v[j];
			j+=k;
		}
		if(sum<min)
		{
			c = i+1;
			min = sum;
		}
		i++;
		k1--;
	}
	
	cout<<c;
	return 0;
}
