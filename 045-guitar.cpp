/*#include <stdio.h>

int dp[101][1001];

void guitar()
{
	int N, S, M, i, j;
	int v[101];
	
	scanf("%d %d %d", &N, &S, &M);
	for(i= 0; i< N; i++) scanf("%d", &v[i]);
	
	dp[0][S] =1;
	
	for(i= 0; i< N; i++) {
		for(j= 0; j< 1001; j++) {
			if(dp[i][j]) {
				if(j-v[i] >= 0) dp[i+1][j-v[i]] += 1;
				if(j+v[i] <= M) dp[i+1][j+v[i]] += 1; 
			}
		}
	}
	int max = -1;
	for(i= 0; i< 1001; i++) if(dp[N][i]) max = max > i ? max : i;
	printf("%d\n", max);
}*/
