/*#include <stdio.h>

int dp[2][10002];
int coin[101][2];

void change()
{
	int T, C, i, j, k;
	scanf("%d\n%d", &T, &C);
	for(i= 1; i<= C; i++) scanf("%d %d", &coin[i][0], &coin[i][1]);
	
	dp[0][0] = 1;
	for(i= 1; i<= C; i++) {
		for(k= 1; k<= coin[i][1]; k++) {
			for(j= 0; coin[i][0] * k + j<= 10000; j++)  
				dp[1][coin[i][0]* k + j] += dp[0][j];
		}
		for(j= 1; j<= 10000; j++) {
			dp[0][j] += dp[1][j]; dp[1][j] = 0;
		}
	}
	for(i= 0; i<= T; i++) printf("%d ", dp[0][i]);
	printf("\n%d\n", dp[0][T]);
}*/
