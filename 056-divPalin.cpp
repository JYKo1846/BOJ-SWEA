/*#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string in;
int dp[2501][2501];
int cnt[2501];

void divPalin()
{
	int i, len, j, sz;
	cin >> in;
	in = '0'+ in; sz = in.size();
	cout << sz << endl;
	for(i= 1; i <= sz; i++) {
		dp[i][i] = 1; dp[i][i-1] = 1;
	}
	for(i= 1; i< 2502; i++) cnt[i] = 2501;
	cnt[1] = 1;
	for(len= 1; len < sz; len++) {
		for(i= 1; i+len < sz; i++){
			j= i+ len;
			if(in[i] == in[j] && dp[i+1][j-1]) dp[i][j] = 1;
		}
	}
	
	for(i= 1; i < sz; i++) 
		for(j= i; j< sz; j++){
			if(dp[i][j]) cnt[j] = min(cnt[j], cnt[i-1]+1);
			
	}
	cout << cnt[in.size()-1] << endl;

}*/
