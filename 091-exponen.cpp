/*#include <stdio.h>
#define DIV 1000000000

int dp[1000001][21];

void exponen()
{
	int N;
	scanf("%d", &N);
	dp[1][0] = 1;
	for(int i= 2; i<= N; i++) {
		if(i%2 == 0) {
			int cnt= 1;
			for(int j= 2; i%j== 0 && j<= i; j*= 2) {
				if(i-j == 0) dp[i][cnt] = 1;
				else
					for(int k= cnt; dp[i-j][k] != 0; k++)
						dp[i][cnt] = (dp[i][cnt]+ dp[i-j][k]) % DIV;
				cnt++;
			}
		}
		for(int j= 0; dp[i-1][j] != 0; j++) dp[i][0] = (dp[i][0]+ dp[i-1][j]) % DIV;
	}
	int res = 0;
	for(int i= 0; dp[N][i] != 0; i++) res = (res + dp[N][i]) % DIV;
	printf("%d\n", res);
}*/
