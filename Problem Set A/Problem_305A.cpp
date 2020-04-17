#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x==0)
		{
			a.push_back(x);
		}
		else{
			v.push_back(x);
		}
	}
	sort(v.begin(),v.end());
	bool f1 = 1;
	bool f2 = 1;
	bool f3 = 1;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>0 && v[i]<10 && f1)
		{
			a.push_back(v[i]);
			f1 = 0;
		}
		else if(v[i]>=10 && v[i]<100 && f2){
			if(f1==0)
			{
				if(v[i]%10==0)
				{
					a.push_back(v[i]);
					f2=0;
				}
			}
			else{
				a.push_back(v[i]);
				f2=0;
			}
		}
		else if(v[i]==100 && f3){
			a.push_back(v[i]);
			f3 = 0;
		}
	}
	
	cout<<a.size()<<endl;
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
