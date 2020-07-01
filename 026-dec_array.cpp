/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void decarr()
{
	int num[1001]; int dp[1001] = {0, };
	int n, i, j, max = 0;
	scanf("%d", &n);
	
	for(i = 1; i<= n; i++) scanf("%d", &num[i]);
	num[0] = 0;
	for(i = 1; i<= n; i++) {
		for(j = i-1; j > -1; j--) if(num[i] < num[j]) dp[i] = dp[i] > dp[j] +1 ? dp[i] : dp[j]+1;
		if(dp[i] == 0) dp[i] = 1;
		max = max > dp[i] ? max : dp[i];
	}
	
	printf("%d\n", max);
}*/
