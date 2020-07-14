/*#include <stdio.h>

int Max(int a, int b) { return a > b ? a : b; }

int in[301][301];
int dp[301][301];
int N, M;

void f(int m)
{
	if(m == M) return ;
	for(int i= m; i< N; i++)
		if(dp[m][i])
			for(int j= i+1; j<= N; j++)
				if(in[i][j]) dp[m+1][j]= Max(dp[m+1][j], dp[m][i]+ in[i][j]);
	f(m+1);
}

void travel()
{
	int K, i, res= 0;
	scanf("%d %d %d", &N, &M, &K);
	for(i= 1; i<= K; i++) {
		int t1, t2, t3;
		scanf("%d %d %d", &t1, &t2, &t3);
		if(t2 > t1) in[t1][t2] = Max(in[t1][t2], t3);
	}
	for(i= 2; i<= N; i++) dp[2][i] = in[1][i];
	f(2);
	for(i= 2; i<= M; i++) res= Max(res, dp[i][N]);
	printf("%d\n", res);
}*/
