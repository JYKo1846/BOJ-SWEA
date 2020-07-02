/*#include <iostream>
#include <string>

using namespace std;

unsigned long long dp[101][101];
string res = "";

string dynamic(int x, int y, long long t)
{
	if(x== 0) {
		for(int i= 1; i<= y; i++) res += 'z';
		return res;
	}
	else if(y== 0) {
		for(int i= 1; i<= x; i++) res += 'a';
		return res;
	}
	else {
		if(dp[x-1][y] >= t) return 'a' + dynamic(x-1, y, t);
		else if(dp[x][y] < t) return "-1";
		else return 'z'+ dynamic(x, y-1, t- dp[x-1][y]);
	}
}

void dict()
{
	int N, M, K, i, j;
	for(i= 0; i< 101; i++) { dp[i][0] = 1; dp[0][i]= 1; }
	cin >> N >> M >> K;
	for(i= 1; i<= N; i++) for(j= 1; j<= M; j++) dp[i][j] = dp[i][j-1] + dp[i-1][j];
	cout << dynamic(N, M, K);
}*/
