/*#include <stdio.h>
#define DIV 1000000

long long dp[1001][3][2];

void attendance()
{
	
	int N, i;
	scanf("%d", &N);
		dp[1][0][0] = 1; dp[1][1][1] = 1; dp[1][2][0] = 1;
		dp[2][0][0] = 2; dp[2][0][1] = 1; dp[2][1][1] = 2; dp[2][2][0] = 2; dp[2][2][1] = 1;
		for(i= 3; i<= N; i++) {
			dp[i][0][0] = (dp[i-1][0][0]+ dp[i-1][2][0])% DIV;
			dp[i][0][1] = (dp[i-1][0][1]+ dp[i-1][1][1]+ dp[i-1][2][1])% DIV;
			dp[i][1][1] = dp[i][0][0];
			dp[i][2][0] = (dp[i-1][0][0]+ dp[i-2][0][0])% DIV;
			dp[i][2][1] = (dp[i-1][0][1]+ dp[i-1][1][1]+ dp[i-2][0][1] + dp[i-2][1][1])% DIV;
		}
		long long res= 0;
		for(i= 0; i<= 2; i++)
			res = (res + dp[N][i][0] + dp[N][i][1])% DIV;
		printf("%lld\n", res);
}*/
