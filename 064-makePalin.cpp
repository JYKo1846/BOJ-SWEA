/*#include <iostream>
#include <string>

using namespace std;

bool dp[1003][1003];

void makePalin()
{
	string in;
	int i; 
	cin >> in;
	in = '0' + in;
	
	for(i= 0; i<= in.length(); i++) {
		dp[i][i] = 1;	dp[i+1][i] = 1;
	}
	
	for(i= 1; i + 1<= in.length(); i++) {
		for(int j= 1; i+ j<= in.length(); j++) {
			if(in[i+j] == in[j])
				dp[j][i+j] = dp[j+1][i+j-1];
		}
	}
	for(i= 1; i< in.length(); i++){
		if(dp[i][in.length()-1]) {
			cout << in.length() + i - 2 << endl;
			break; 
		}
	}
}*/
