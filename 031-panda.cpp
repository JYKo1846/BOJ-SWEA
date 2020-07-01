/*#include <stdio.h>

int n, max = 0;
int bam[501][501] = {0, };
int dp[501][501] = {0, };

int panda(int x, int y);
int panda(int x, int y)
{
	int dx[4] = {-1, 0, 1, 0};
	int dy[4] = {0, 1, 0, -1};
	int i, j;
	if(dp[x][y] != 0) return dp[x][y];
	dp[x][y] = 1;
	for(i = 0; i< 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if( nx > 0 && nx <= n && ny > 0 && ny <= n && bam[x][y] < bam[nx][ny]) {
			int t = panda(nx, ny);
			dp[x][y] = dp[x][y] > t +1 ? dp[x][y] : t+1;
		}
	}
	return dp[x][y];
}


void init_panda()
{
	int i, j;
	scanf("%d", &n);
	for(i = 1; i<= n; i++) for(j = 1; j<= n; j++) scanf("%d", &bam[i][j]);
	for(i = 1; i<= n; i++) for(j = 1; j<= n; j++) {
		int t = panda(i, j);
		max = max > t ? max : t;
	}
	printf("%d\n", max);
	for(i = 0; i<= n; i++) {
		for(j = 1; j<= n; j++) printf("%d ", dp[i][j]);
		printf("\n");
	}
}*/
