#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	double sum = 0.0;
	if(n%2==0)
	{
		int i = 1;
		while(i<n)
		{
			sum = sum + (pow(v[i],2) - pow(v[i-1],2));
			i = i+2;
		}
		cout<<fixed<<setprecision(10)<<sum*pi;
	}
	else{
		if(n==1)
		{
			cout<<fixed<<setprecision(10)<<pi*(pow(v[0],2));
			return 0;
		}
		int i = 2;
		while(i<n)
		{
			sum = sum + (pow(v[i],2) - pow(v[i-1],2));
			i = i+2;
		}
		sum += pow(v[0],2);
		cout<<fixed<<setprecision(10)<<pi*sum;
	}
	
	return 0;
}
