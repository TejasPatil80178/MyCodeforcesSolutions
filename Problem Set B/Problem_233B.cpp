#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sumx(ll x)
{
	ll sum = 0;
	while(x>0)
	{
		sum = sum + (x%10);
		x = x/10;
	}
	
	return sum;
}

int main() {
	ll n;
	cin>>n;
	ll x = (ll)sqrt(n);
	while(x>0 && x>((ll)sqrt(n)-100))
	{
		if((n/x) == x+sumx(x))
		{
			cout<<x;
			break;
		}
		x--;
	}
	if(x==0 || x<=(ll)sqrt(n)-100)
	{
		cout<<-1;
	}
	return 0;
}
