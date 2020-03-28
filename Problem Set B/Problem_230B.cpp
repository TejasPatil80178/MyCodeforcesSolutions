#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n) 
{ 
	bool flag = 1;
	if(n<2)
	{
		flag = 0;
	}
	else if(n%2==0)
	{
		flag = 0;
	}
	else{
		for(int i=3;i<=sqrt(n);i=i+2)
		{
			if(n%i==0)
			{
				flag = 0;
				break;
			}
		}
	}
    return flag;
} 
 
int main() {
	ll n;
	cin>>n;
	vector<ll> v;
	for(int i=0;i<n;i++)
	{
		ll temp;
		cin>>temp;
		v.push_back(temp);
	}
	for(int i=0;i<n;i++)
	{
		ll a = sqrt(v[i]);
		if(a*a == v[i])
		{
			bool b = isPrime(a);
			if(b == true)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
