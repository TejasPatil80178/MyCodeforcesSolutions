#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int h = stoi(s.substr(0,2));
	int m = stoi(s.substr(3,2));
	int x = (h%10)*10 + (h/10);
	if(h==23 && m>=32)
	{
		cout<<"00"<<":"<<"00";
	}
	else if(m<x)
	{
		while(x>59){
			h++;
			x = (h%10)*10 + (h/10);
		}
		cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<x;
	}
	else{
		do{
			h++;
			x = (h%10)*10 + (h/10);
		}
		while(x>59);
		cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<x;
	}
	return 0;
}
