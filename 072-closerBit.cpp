/*#include <stdio.h>

int dp[101][101][2];

void closerBit()
{
	int N, K, i, j;
	
	scanf("%d %d", &N, &K);
	
	dp[1][0][0]= 1; dp[1][0][1] = 1;
	for(i= 2; i<= N; i++) {
		for(j= 0; j<= i-1; j++) {
			dp[i][j][0] = dp[i-1][j][0] + dp[i-1][j][1];
			dp[i][j][1] = dp[i-1][j][0] + dp[i-1][j-1][1];
		}
	}
	printf("%d\n", dp[N][K][0] + dp[N][K][1]);
}*/
