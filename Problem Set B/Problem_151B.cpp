#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<string> v1;
	vector<string> v2;
	vector<string> v3;
	int k1max = INT_MIN;
	int k2max = INT_MIN;
	int k3max = INT_MIN;
	while(n>0)
	{
		int s;
		string a;
		cin>>s>>a;
		int k1 = 0;
		int k2 = 0;
		int k3 = 0;
		while(s>0)
		{
			string b;
			cin>>b;
			if(b[0]==b[1] && b[1]==b[3] && b[3]==b[4] && b[4]==b[6] && b[6]==b[7])
			{
				k1++;
			}
			else if(b[0]>b[1] && b[1]>b[3] && b[3]>b[4] && b[4]>b[6] && b[6]>b[7])
			{
				k2++;
			}
			else{
				k3++;
			}
			s--;
		}
		if(k1 > k1max)
		{
			if(v1.empty())
			{
				v1.push_back(a);
			}
			else{
				v1.clear();
				v1.push_back(a);
			}
			k1max = k1;
		}
		else if(k1==k1max)
		{
			v1.push_back(a);
		}
		if(k2 > k2max)
		{
			if(v2.empty())
			{
				v2.push_back(a);
			}
			else{
				v2.clear();
				v2.push_back(a);
			}
			k2max = k2;
		}
		else if(k2==k2max)
		{
			v2.push_back(a);
		}
		if(k3 > k3max)
		{
			if(v3.empty())
			{
				v3.push_back(a);
			}
			else{
				v3.clear();
				v3.push_back(a);
			}
			k3max = k3;
		}
		else if(k3==k3max)
		{
			v3.push_back(a);
		}
		n--;
	}
	cout<<"If you want to call a taxi, you should call: ";
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i];
		if(i+1 <= v1.size()-1)
		{
			cout<<", ";
		}
	}
	cout<<"."<<endl;
	cout<<"If you want to order a pizza, you should call: ";
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i];
		if(i+1 <= v2.size()-1)
		{
			cout<<", ";
		}
	}
	cout<<"."<<endl;
	cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
	for(int i=0;i<v3.size();i++)
	{
		cout<<v3[i];
		if(i+1 <= v3.size()-1)
		{
			cout<<", ";
		}
	}
	cout<<"."<<endl;
	
	return 0;
}
