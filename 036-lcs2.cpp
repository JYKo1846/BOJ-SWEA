/*#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s1;
string s2;
int  dp[1001][1001];

void lcs2()
{
	string ansS;
	int i, j, ans;
	getline(cin, s1);
	getline(cin, s2);
	s1 = '0'+s1;
	s2 = '0'+s2;
	
	for(i= 1; s2[i]!= '\0'; i++) {
		for(j= 1; s1[j]!= '\0'; j++) {
			if(s2[i] == s1[j]) dp[i][j] = dp[i-1][j-1] +1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	ans = dp[i-1][j-1];
	cout << ans << endl;
	if(ans != 0) {
		int cur = j-1;
		for(i-= 1; i> 0; i--) {
			for(j= cur; j> 0; j--) {
				if(s2[i] == s1[j]) {
					ansS += s2[i];
					cur = j-1;
					break;
				}
				else if(dp[i][j] == dp[i-1][j]) {
					cur = j;
					break;
				}
			}
		}
		cout << ansS << endl;
		for(i= ans-1; i>= 0; i--) printf("%c", ansS[i]);
	}
	
}*/
