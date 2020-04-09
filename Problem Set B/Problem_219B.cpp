#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n,d;
	cin>>n>>d;
	d = n-d;
	ll k = n;
	ll a = 1;
	while(n>d)
	{
		while((k%(10*a) / a)!=9)
		{
			k = k-a;
			if(k<d)
			{
				goto X;
			}
		}
		n = k;
		a = a*10;
	}
X:	cout<<n;
	return 0;
}
