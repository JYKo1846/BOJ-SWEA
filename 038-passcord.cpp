/*#include <iostream>
#include <string>

using namespace std;

string s;
int dp[5001];

void passcord()
{
	int i;
	
	cin >> s;
	s = '0'+ s;
	dp[0] = 1; dp[1] = 1;
	
	for(i= 2; s[i]!= '\0'; i++) {
		int t = s[i]-'0', t10 = (s[i-1]-'0')*10 + t;
		
		if(0 < t && t < 10) dp[i] = (dp[i] + dp[i-1]) % 1000000 ;
		if(10 <= t10 && t10<= 26) dp[i] = (dp[i] + dp[i-2]) % 1000000;
	}
	for(i= 1; s[i]!= '\0'; i++) cout << dp[i] <<" ";
	cout << endl;
	if(s[1] == '0') dp[i-1] = 0;
	cout << dp[i-1]% 1000000 << endl;
}
	*/
	
	
