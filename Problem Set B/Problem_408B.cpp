#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	string b;
	cin>>a>>b;
	vector<int> v1(26,0);
	vector<int> v2(26,0);
	for(int i=0;i<a.length();i++)
	{
		v1[a[i]-'a']++;
	}
	for(int i=0;i<b.length();i++)
	{
		v2[b[i]-'a']++;
	}
	int sum = 0;
	for(int i =0;i<26;i++)
	{
		if(v2[i]!=0 && v1[i]==0)
		{
			cout<<-1;
			return 0;
		}
		else{
			sum+=min(v1[i],v2[i]);
		}
	}
	
	cout<<sum;
	
	return 0;
}
