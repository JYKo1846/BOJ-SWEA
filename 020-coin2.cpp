/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void coin2()
{
	int co[101];
	int dp[10001];
	int N, K, i, j;

	for(i = 0; i< 10001; i++) dp[i] = 10001;
	dp[0] = 0;
	scanf("%d %d", &N, &K);
	for(i = 0; i< N; i++) scanf("%d", &co[i]);
	
	for(i = 0; i< N; i++) for(j = 1; j <K+1 ; j++) {
		if(j >= co[i])
			dp[j] = dp[j] > dp[j-co[i]] +1 ? dp[j-co[i]] +1 : dp[j];
		
	}
	if(dp[K] == 10001) dp[K] = -1;
	printf("%d\n", dp[K]);
}*/
