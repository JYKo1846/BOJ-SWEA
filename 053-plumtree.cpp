/*#include <stdio.h>

int dp[31][1001];
int v[1001];

int Max(int a, int b) { return a> b? a: b; }

void plumtree()
{
	int N, M, i, j;
	
	scanf("%d %d", &N, &M);
	for(i= 1; i<= N; i++) scanf("%d", &v[i]);
	for(i= 1; i<= N; i++) {
		dp[0][i] = dp[0][i-1];
		if(v[i]== 1) dp[0][i]++;
	}
	
	for(i= 1; i<= M; i++) {
		for(j= 1; j<= N; j++) {
			int t= Max(dp[i-1][j-1], dp[i][j-1]);
			if(v[j]%2 == (i+1)%2) t++;
			dp[i][j] = t;
		}
	}
	
	int res= 0;
	for(i= 0; i<= M; i++) res = Max(res, dp[i][N]);
	printf("%d\n", res);
}*/
