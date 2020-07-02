/*#include <string>
#include <iostream>

int dp[4001][4001]= {0, };

using namespace std;

void lcCs()
{
	string s1, s2;
	int i, j, res= 0;
	cin >>s1 >>s2;
	
	s1= '0'+s1;
	s2= '0'+s2;
	
	for(i= 1; s1[i]!='\0'; i++) {
		for(j= 1; s2[j]!='\0'; j++) {
			if(s1[i] == s2[j]) dp[i][j] = dp[i-1][j-1]+1;
			res = max(res, dp[i][j]);
		}
	}
	cout << res << endl;
}*/
