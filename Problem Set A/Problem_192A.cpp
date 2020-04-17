#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	bool b;
	int k1 = 1;
	while(k1<=sqrt(n))
	{
		int k2 = sqrt((2*n) - (k1*k1) - k1);
		b = (k1*(k1+1)) + (k2*(k2+1)) == (2*n) && k1>0 && k2>0;
		if(b) {
			cout<<"YES";
			break;
		}
		
		k1++;
	}
	if(!b) cout<<"NO";
	return 0;
}
