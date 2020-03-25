#include <bits/stdc++.h>
using namespace std;

int main() {
	char c;
	cin>>c;
	string s1;
	string s2;
	string rank = "6789TJQKA";
	cin>>s1>>s2;
	if(s1[1]==c && s2[1]!=c)
	{
		cout<<"YES";
	}
	else if(s1[1] == s2[1]){
		size_t it1 = rank.find(s1[0]);
		size_t it2 = rank.find(s2[0]);
		if(it1 > it2)
		{
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"NO";
	}
	return 0;
}
