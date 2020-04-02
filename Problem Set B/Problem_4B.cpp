#include <bits/stdc++.h>
using namespace std;

int main() {
	int d,sum;
	cin>>d>>sum;
	vector<int> v(d,0);
	vector<int> s(d,0);
	int t = 0;
	for(int i=0;i<d;i++)
	{
		int x,y;
		cin>>x>>y;
		t+=x;
		v[i] = x;
		s[i] = y;
	}
	sum = sum-t;
	int i=0;
	while(i<d && sum>0)
	{
		
		if(sum - (s[i]-v[i]) > 0){
			sum = sum - (s[i]-v[i]);
			v[i] = s[i];
		}
		else{
			v[i]+=sum;
			sum = 0;
			break;
		}
		
		i++;
	}
	if(sum==0)
	{
		cout<<"YES"<<endl;
		for(int i=0;i<d;i++)
		{
			cout<<v[i]<<" ";
		}
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}
