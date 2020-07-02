/*#include <stdio.h>

void coin()
{
	int v[20] = {0, };
	int dp[2][10001]= {0, };
	int N, M, i, j;
	
	scanf("%d", &N);
	for(i= 0; i< N; i++) scanf("%d", &v[i]);
	scanf("%d", &M);
	
	dp[0][0]= 1;
	for(i= 0; i< N; i++) {
		for(j= 1; j* v[i] <= M; j++) {
			for(int k= 0; k+ j*v[i]<= M; k++)
				dp[1][k+j*v[i]] += dp[0][k];
		}
		for(j= 1; j<= M; j++) dp[0][j] = dp[1][j];
	}
	
	printf("%d\n", dp[0][M]);
}*/
