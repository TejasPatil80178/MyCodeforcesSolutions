#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1;
	cin>>n1;
	vector<int> n;
	vector<int> p;
	vector<int> z;
	for(int i =0;i<n1;i++)
	{
		int x;
		cin>>x;
		if(x<0){
			n.push_back(x);
		}
		else if(x>0)
		{
			p.push_back(x);
		}
		else{
			z.push_back(x);
		}
	}
	
	if(p.empty())
	{
		p.push_back(n.front());
		n.erase(n.begin());
		p.push_back(n.front());
		n.erase(n.begin());
	}
	if(n.size() % 2 == 0)
	{
		z.push_back(n.front());
		n.erase(n.begin());
	}
	
	cout<<n.size()<<" ";
	for(int i = 0;i<n.size();i++)
	{
		cout<<n[i]<<" ";
	}
	cout<<endl<<p.size()<<" ";
	for(int  i= 0;i<p.size();i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl<<z.size()<<" ";
	for(int i =0;i<z.size();i++)
	{
		cout<<z[i]<<" "; 
	}
	
	return 0;
}
