#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin>>n;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
	}
	ll k = v[0];
	int i = 1;
	ll sum = 0;
	while(i<n)
	{
		if(k>v[i])
		{
			ll min = v[i];
			while(min>=v[i])
			{
				min = v[i];
				i++;
				if(i>=n)
				{
					break;
				}
			}
			sum = sum+(k-min);
			if(i>=n)
			{
				cout<<sum;
				return 0;
			}
		}
		k = v[i];
		i++;
	}
	cout<<sum;
	return 0;
}
