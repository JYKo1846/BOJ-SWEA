/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void n3_tile()
{
	long long dp[31] = {0, };
	int n, i, j;
	
	scanf("%d", &n);
	dp[2] = 3;
	
	for(i = 4; i <= n; i+=2) {
		dp[i] = dp[i-2] * dp[2];
		for(j = i-4; j > 0; j-=2)
			dp[i] += 2*dp[j];
		dp[i] += 2;
	}
	printf("%lld\n", dp[n]);
}*/
