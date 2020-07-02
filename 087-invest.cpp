/*#include <stdio.h>

int Max(int a, int b) { return a > b ? a : b; }

int in[301][21];
int dp[21][301];
int res[21];

void invest()
{
	int N, M, i, j;
	scanf("%d %d", &N, &M);
	for(i= 1; i<= N; i++) {
		int T; scanf("%d", &T);
		for(j= 1; j<= M; j++) scanf("%d", &in[i][j]);
	}
	
	for(i= 1; i<= M; i++)
		for(j= 1; j<= N; j++)
			for(int k= 0; k<= j; k++) 
				dp[i][j] = Max(dp[i][j], dp[i-1][j-k] + in[k][i]);
	
	int startC= N;
	for(i= M; i>= 1; i--) {
		for(j= 0; j<= N; j++) {
			if(dp[i-1][startC-j]+ in[j][i] == dp[i][startC]) {
				res[i]= j;
				startC-= j;
				break;
			}
		}
	}			
	
	printf("\n");
	for(i= 0; i<= M; i++) {
		for(j= 0; j<= N; j++) printf("%d ", dp[i][j]);
		printf("\n");
	}
	
	printf("%d\n", dp[M][N]);
	for(i= 1; i<= M; i++) printf("%d ", res[i]);
}*/
