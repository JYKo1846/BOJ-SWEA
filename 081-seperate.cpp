/*#include <stdio.h>
int Max(int a, int b) { return a > b ? a : b; }
int dp[102][52];
bool visit[102][52];
int sum[102];

int func(int n, int m)
{
	if(m == 0) return 0;
	if(n < 0) return -2e9;
	if(visit[n][m]) return dp[n][m];
	
	visit[n][m] = true;
	dp[n][m] = func(n-1, m);
	for(int i= n; i> 0; i--)
		dp[n][m] = Max(dp[n][m], func(i-2, m-1) + sum[n] - sum[i-1]);
	return dp[n][m];
}

void seperate()
{
	int N, M, T, i;
	scanf("%d %d", &N, &M);
	for(i= 1; i<= N; i++) {
		scanf("%d", &T);
		sum[i] = sum[i-1] + T;
	}
	printf("%d\n", func(N, M));
}*/
