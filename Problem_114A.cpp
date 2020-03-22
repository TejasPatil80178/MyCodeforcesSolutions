#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long x,k;
	cin>>k>>x;
	int c = -1;
	while(x%k == 0)
	{
		x = x/k;
		c++;
	}
	if(c!=-1 && x==1)
	{
		cout<<"YES"<<endl;
		cout<<c;
	}
	else{
		cout<<"NO";
	}
	return 0;
}
