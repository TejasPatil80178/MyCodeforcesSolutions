#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int c = 0;
	vector<int> v;
	for(int i=0;i<4;i++)
	{
		string s;
		cin>>s;
		int temp = s.length() - 2;
		v.push_back(temp);
	}
	vector<int> a = v;
	sort(v.begin(),v.end());
	bool c1 = v[0] <= (v[1]/2) && v[3] < (2*v[2]);
	if(c1)
	{
		vector<int>::iterator it = find(a.begin(),a.end(),v[0]);
		cout<<(char)(it - a.begin()+65);
	}
	bool c2 = v[0] > (v[1]/2) && v[3] >= (2*v[2]);
	if(c2)
	{
		vector<int>::iterator it = find(a.begin(),a.end(),v[3]);
		cout<<(char)(it - a.begin()+65);
	}
	
	if(c1==false && c2==false)
	{
		cout<<"C";
	}
	return 0;
}
