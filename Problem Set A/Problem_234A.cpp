#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream fi;
	fi.open("input.txt");
	ofstream fo;
	fo.open("output.txt");
	int n;
	fi>>n;
	string s;
	fi>>s;
	int i=0;
	int j = n/2;
	while(i<n/2 && j+1<=n)
	{
		if(s[i]=='L')
		{
			fo<<i+1<<" "<<j+1<<endl;
		}
		else{
			fo<<j+1<<" "<<i+1<<endl;
		}
		i++;
		j++;
	}
	fi.close();
	fo.close();
	return 0;
}
