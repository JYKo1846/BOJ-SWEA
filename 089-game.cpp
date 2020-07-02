/*#include <stdio.h>
#define INFI 2e9

int Max(int a, int b, int c, int d) 
{ int T= 0; if(a> T) T= a; if(b> T) T= b; if(c> T) T= c; if(d> T) T= d; return T; }

int N, M;
char in[51][51];
int dp[51][51];
bool visit[51][51];

int dfs(int x, int y)
{
	if(x<= 0 || y<= 0 || x> N || y> M || in[x][y] == -3) return 0;
	if(visit[x][y]) return INFI;
	if(dp[x][y]!= 0) return dp[x][y];
	visit[x][y] = true;
	int nxt= in[x][y];
	int T= Max(dfs(x+nxt, y), dfs(x, y+nxt), dfs(x-nxt, y), dfs(x, y-nxt)) +1;
	visit[x][y] = false;
	return dp[x][y] = T;
}

void game()
{
	int i, j;
	scanf("%d %d", &N, &M);
	for(i= 1; i<= N; i++){
		char T;
		for(j= 0; j<= M; j++) {
			scanf("%1c", &T);
			if(T == 'H') in[i][j]= -3;
			else if(T == '\n') continue;
			else in[i][j] = T- '0';
			
		}
	}
	int T= dfs(1, 1);
	if(T >= INFI) T= -1;
	printf("%d\n", T);

	for(i= 0; i<= N ;i++) {
		for(j= 0; j<= M; j++) printf("%d ", dp[i][j]);
		printf("\n");
	}
}*/
