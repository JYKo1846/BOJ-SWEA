/*#include <stdio.h>
#define DIV 1000000000

int dp[101][10][1 << 10];

void stairNum()
{
	int N, i, j, k;
	int full = (1 << 10) -1;
	scanf("%d", &N);
	for(i= 1; i< 10; i++) dp[1][i][1 << i] = 1;
	
	for(i= 2; i<= N; i++) {
		for(j= 0; j<= 9; j++) {
			for(k= 0; k<= full; k++) {
				if(j!= 0)
					dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i-1][j-1][k]) % DIV;
				if(j!= 9)
					dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i-1][j+1][k]) % DIV;
			}
		}
	}
	
	int res= 0;
	for(i= 0; i<= 9; i++)
		res = (res + dp[N][i][full]) % DIV;
	
	printf("%d\n", res);
}*/
