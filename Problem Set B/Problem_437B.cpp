#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	int sum,limit;
	cin>>sum>>limit;
	while(limit>0)
	{
		int k = 0;
		int c = limit;
		while(c%2==0 && c>0)
		{
			c = c/2;
			k++;
		}
		if(sum-pow(2,k) >=0)
		{
			sum = sum-pow(2,k);
			v.push_back(limit);
		}
		if(sum==0)
		{
			break;
		}
		limit--;
	}
	if(sum>0)
	{
		cout<<-1;
	}
	else{
		cout<<v.size()<<endl;
		for(int i = 0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
	} 
	return 0;
}
