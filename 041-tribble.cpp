/*#include <stdio.h>

void tribble()
{
	long long dp[68];
	int N, i;
	scanf("%d", &N);
	dp[0]= 1; dp[1]= 1; dp[2]= 2; dp[3]= 4;
	
	for(i= 4; i<= N; i++)
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];
		
	printf("%lld\n", dp[N]);
}*/
