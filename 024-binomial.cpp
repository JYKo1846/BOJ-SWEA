/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

long long bi_dp[1001][1001] = {0, };

void binomial()
{
	int n, k, i, j;
	scanf("%d %d", &n, &k);
	for(i = 0; i< 1001; i++) {
		bi_dp[i][0] = 1;
		bi_dp[i][i] = 1;
	}
	
	for(i = 2; i<= n; i++) {
		for(j = 1; j<= k; j++) {
			if(j == i) break;
			bi_dp[i][j] = (bi_dp[i-1][j-1] + bi_dp[i-1][j]) % 10007;
		}
	}
	printf("%lld\n", (bi_dp[n][k] % 10007));
}*/
