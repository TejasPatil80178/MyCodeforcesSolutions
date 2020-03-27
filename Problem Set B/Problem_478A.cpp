#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
// Driver code 
int main() 
{ 
	ll n,m;
	cin>>n>>m;
	ll k1 = m-1;
	ll n1 = n-k1;
	ll kmax = n1*(n1-1) / 2;
	ll kmin;
	k1 = 2*k1;
	n1 = n - k1;
	ll a = n/m;
	if(n%m == 0){
		kmin = m*(a*(a-1) /2);
	}
	else if(n1>0){
		ll b = n%m;
		kmin = b*(a*(a+1)/2) + (m-b)*(a*(a-1)/2);
	}
	else{
		kmin = n-m;
	}
	cout<<kmin<<" "<<kmax;
	return 0; 
} 
