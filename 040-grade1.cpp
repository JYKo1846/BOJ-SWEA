/*#include <stdio.h>

int v[100];
long long dp[2][901] = {0, };

void grade1()
{
	int N, i, j, tot= 0;
	scanf("%d", &N);
	for(i= 0; i< N; i++) {
		scanf("%d", &v[i]);
		if(i!= N-1) tot += v[i];
	}
	dp[0][v[0]] = 1;
	
	for(i= 1; i< N-1; i++) {
		for(j= 0; j<= tot; j++) {
			if(dp[0][j]) {
				if(j- v[i] > -1) dp[1][j- v[i]] += dp[0][j];
				if(j+ v[i] < 21)dp[1][j+ v[i]] += dp[0][j];
			}
		}
		for(j= 0; j<= tot; j++) {
			dp[0][j] = dp[1][j];
			dp[1][j] = 0;
		}
	}
	printf("%lld\n", dp[0][v[N-1]]);
}*/
