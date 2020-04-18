#include <iostream>
using namespace std;

int main() {
	int a,b,r;
	cin>>a>>b>>r;
	if(a>=2*r && b>=2*r) cout<<"First";
	else cout<<"Second";
	return 0;
}

/* every time the player 2 has a move the player 1 also has a move as well. Which means the player 1 just lose in the situation when initially there is not a move from him, in other words when 2r is greater than a or b. */
