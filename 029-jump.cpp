/*#include <stdio.h>

int jump[101][101];
int jump_dp[101][101];
int jump_n;
int jump_dfs(int x, int y);

int jump_dfs(int x, int y)
{
	if(x == jump_n && y == jump_n) return 1;
	if(jump_dp[x][y] != -1) return jump_dp[x][y];
	else {
		jump_dp[x][y] = 0;
		if(jump[x][y] + x <= jump_n) jump_dp[x][y] += jump_dfs(jump[x][y] +x, y);
		if(jump[x][y] + y <= jump_n) jump_dp[x][y] += jump_dfs(x, jump[x][y] +y);
	}
	return jump_dp[x][y];
}
		 
void init_jump()
{
	int i,j;
	for(i = 0 ; i< 101; i++) for(j = 0; j< 101; j++) jump_dp[i][j] = -1;
	
	scanf("%d", &jump_n);
	for(i = 1; i<= jump_n; i++) for(j = 1; j<= jump_n; j++) scanf("%d", &jump[i][j]);
	printf("%d\n", jump_dfs(1, 1));
}*/
