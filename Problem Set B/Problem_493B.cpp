#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n;
	cin>>n;
	vector<int> a;
	vector<int> b;
	int t;
	int pos = 0;
	int neg = 0;
	ll sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		sum+=t;
		if(t > 0){
			pos++;
			a.push_back(t);
		}
		else{
			neg++;
			b.push_back(t);
		}
	}
	if(sum>0)
	{
		cout<<"first";
	}
	else if(sum<0)
	{
		cout<<"second";
	}
	else{
		int k = min(pos,neg);
		for(int i=0;i<k;i++)
		{
			if(a[i]!=abs(b[i]))
			{
				if(abs(b[i]) > a[i])
				{
					cout<<"second";
					return 0;
				}
				else{
					cout<<"first";
					return 0;
				}
			}
		}
		if(t>0)
		{
			cout<<"first";
			return 0;
		}else{
			cout<<"second";
			return 0;
		}
		
	}
	
	return 0;
}
