#include <bits/stdc++.h>
using namespace std;
 
#define ll int
 
int main() {
	ll x,y,n;
	cin>>x>>y>>n;
	vector<ll> v(6,0);
	v[0] = x;
	v[1] = y;
	v[2] = y-x;
	v[3] = -x;
	v[4] = -y;
	v[5] = x-y;
	ll k = n%6;
	if(k==0)
	{
		k = 6;
	}
	if(v[k-1] < 0)
	{
	    while(v[k-1] < 0)
	    {
	        v[k-1] = (v[k-1] + 1000000007) % 1000000007;
	    }
	    cout<<v[k-1];
	}
	else{
		cout<<(v[k-1]%1000000007);
	}
	
	return 0;
}
