/*#include <stdio.h>

int vx[3] = {0, 1, 0};
int vy[3] = {1, 0, -1};

int dp[1000][1000];
int v[1000][1000];
int tmp[2][1000];
int N, M;

int Max(int a, int b) { return a> b ? a : b; }

void robot()
{
	int i, j;
	scanf("%d %d", &N, &M);
	for(i= 0; i< N; i++) for(j= 0; j< M; j++) scanf("%d", &v[i][j]);
	dp[0][0] = v[0][0];
	for(i= 1; i< M; i++) dp[0][i] = dp[0][i-1] + v[0][i];
	
	for(i= 1; i< N; i++) {
		tmp[0][0] = dp[i-1][0] + v[i][0];
		for(j= 1; j< M; j++) tmp[0][j] = Max(dp[i-1][j], tmp[0][j-1]) + v[i][j];
		tmp[1][M-1] = dp[i-1][M-1] + v[i][M-1];
		for(j= M-2; j>= 0; j--) tmp[1][j] = Max(dp[i-1][j], tmp[1][j+1]) + v[i][j];
		for(j= 0; j< M; j++) dp[i][j] = Max(tmp[0][j], tmp[1][j]);
	}
	printf("%d\n", dp[N-1][M-1]);
	
	for(i= 0; i< N; i++) {
		for(j= 0; j< M; j++) printf("%d ", dp[i][j]);
		printf("\n");
	}
}*/	
