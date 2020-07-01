/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void hillarr()
{
	int i, j, k, n, res = 0;
	int dp[1000][10];
	
	for(i = 0; i< 1000; i++) {
		for(j = 0; j<10; j++) dp[i][j] = 0;
		dp[i][0] =1;
	}
	for(i = 0; i< 10; i++) dp[0][i] = 1;
	scanf("%d", &n);
	
	for(i = 0; i< n-1; i++) for(j = 1; j< 10; j++)
			dp[i+1][j] = (dp[i][j] + dp[i+1][j-1])% 10007;
			
	for(i = 0; i< 10; i++) res += dp[n-1][i];
	printf("%d\n", res % 10007);
}*/
