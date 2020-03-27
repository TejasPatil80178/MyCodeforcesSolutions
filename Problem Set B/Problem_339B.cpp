#include <iostream>
using namespace std;
#define ll long long

int main() {
	ll n,m;
	cin>>n>>m;
	ll a[m];
	for(ll i=0;i<m;i++)
	{
		cin>>a[i];
	}
	ll sum = a[0]-1;
	for(ll i = 0;i<m-1;i++)
	{
		if(a[i] <= a[i+1])
		{
			sum = sum+(a[i+1] - a[i]);
		}
		else{
			sum = sum + n - a[i] + a[i+1];
		}
	}
	cout<<sum;
	return 0;
}
