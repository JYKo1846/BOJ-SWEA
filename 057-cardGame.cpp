/*#include <stdio.h>

int Max(int a, int b) { return a > b ? a : b; }

int l[2001];
int r[2001];
int dp[2001][2001];

void cardGame()
{
	int N, i, j, res = 0;
	scanf("%d", &N);
	for(i= 1; i<= N+1; i++) {
			dp[i][0] = -1; dp[0][i] = -1;
	}
	for(i= N; i>= 1; i--) scanf("%d", &l[i]);
	for(i= N; i>= 1; i--) scanf("%d", &r[i]);
	
	for(i= 1; i<= N; i++) {
		for(j= 2; j<= N+1; j++) {
			dp[i][j] = Max(Max(dp[i-1][j], dp[i-1][j-1]), dp[i][j]);
			if(l[i] > r[j-1]) dp[i][j] = Max(dp[i][j], dp[i][j-1] + r[j-1]);
		}
		res = Max(res, dp[i][N+1]);
	}
	printf("%d\n", res);
}*/
