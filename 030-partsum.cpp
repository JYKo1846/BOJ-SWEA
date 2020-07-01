/*#include <stdio.h>
#include <stdlib.h>
long long dp[201][201]= {0, };

void partsum()
{
	int n, k, i, j;
	
	scanf("%d %d", &n, &k);
	for(i = 1; i<= n; i++) dp[i][1] = 1;
	for(i = 1; i<= k; i++) dp[1][i] = i;
	for(i = 2; i<= n; i++) for(j = 2; j<= k; j++)	dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 1000000000;
	printf("%lld\n", dp[n][k] % 1000000000);
}*/
