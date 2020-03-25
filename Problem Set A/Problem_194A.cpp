
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	int n,k;
	cin>>n>>k;
	if(k<=(n*3))
	{
		cout<<(n*3)-k;
	}
	else{
		cout<<0;
	}
	
	return 0;
}
