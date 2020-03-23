#include<bits/stdc++.h>

using namespace std;

string removeZero(string s)
{
	int i =0;
	while(i<s.length()){
		if(s[i] == '0')
		{
			s.erase(s.begin() + i);
		}
		else{
			i++;
		}
	}
	
	return s;
}

int main()
{
	long long a,b,c;
	cin>>a>>b;
	c = a+b;
	long long a1 = stoll(removeZero(to_string(a)));
	long long b1 = stoll(removeZero(to_string(b)));
	long long c1 = stoll(removeZero(to_string(c)));
	if(c1 == a1+b1)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}
