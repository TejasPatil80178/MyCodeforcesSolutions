#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	string a = "$";
	bool flag = 0;
	if(s[0]=='-')
	{
		flag = 1;
		s.erase(s.begin());
	}
	auto it = s.find(".");
	int n = s.length();
	if(it==string::npos)
	{
		it = n;
		s = s+".00";
	}
	if(it+2==n)
	{
		s+="0";
	}
	int i = it-3;
	while(i>0)
	{
		s.insert(i,",");
		i = i-3;
		it++;
	}
	a = a+s.substr(0,it+3);
	if(flag)
	{
		cout<<"("<<a<<")";
	}
	else{
		cout<<a;
	}
	return 0;
}
