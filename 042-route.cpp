/*#include <stdio.h>

long long dp[15][15] = {0, };

long long dfs(int x, int y, int fx, int fy);

long long dfs(int x, int y, int fx, int fy)
{
	if(!dp[x][y]) {
		if(y+1 < fy) dp[x][y] += dfs(x, y+1, fx, fy);
		if(x+1 < fx) dp[x][y] += dfs(x+1, y, fx, fy);
	}
	return dp[x][y];
}

void init_route()
{
	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);
	dp[N-1][M-1] = 1;
	
	int fx= N, fy= M;
	// K ~ N*M 까지의 경우의 수를 DFS 로 계산, 그 후 0*0 ~ K 까지의 경우의 수를 DFS로 계산해서 dp[0][0] 출력
	if(K) {
		int kx= (K-1) / M, ky= (K-1) % M;
		dfs(kx, ky, fx, fy);
		fx= kx+ 1; fy= ky+ 1;
	}
	printf("%lld\n", dfs(0, 0, fx, fy));
	for(int i= 0; i< N; i++) {
		for(int j= 0; j< M; j++) printf("%lld ", dp[i][j]);
		printf("\n");
	}
}*/
