/*#include <stdio.h>
#define DIV 1000000007

long long dp[102][102][102];

void skyscrap()
{
	int N, L, R, i, j, k;
	scanf("%d %d %d", &N, &L, &R);
	dp[1][1][1] = 1;
	for(i= 2; i<= N; i++) 
		for(j= 1; j<= L; j++) 
			for(k= 1; k<= R; k++) 
				dp[i][j][k] = ((dp[i-1][j-1][k]% DIV) + (dp[i-1][j][k-1]% DIV) + ((dp[i-1][j][k] * (i-2))% DIV))% DIV;
				
	printf("%lld\n", dp[N][L][R]%DIV);
}*/
