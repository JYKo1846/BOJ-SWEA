/*#include <stdio.h>

long long dp[65][10];

void dontShrink()
{
	int N, i, j;
	scanf("%d", &N);
	for(i= 0; i< 10; i++) dp[1][i] = 1;
	
	for(i= 2; i<= N; i++) {
		dp[i][0] = 1;
		for(j= 1; j< 10; j++) dp[i][j] = dp[i][j-1] + dp[i-1][j];
	}
	
	long long rs = 0;
	for(i= 0; i< 10; i++) rs += dp[N][i];
	printf("%lld\n", rs);
}*/
