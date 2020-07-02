#include <stdio.h>
#define DIV 1000000003

/*long long dp[1001][1001];

void colorBand()
{
	int N, K, i, j;
	scanf("%d\n%d", &N, &K);
	
	for(i= 3; i< 1001; i++)	dp[i][1]= i;
	
	for(i= 4; i<= N; i++) {
		for(j= 2; j*2 <= K; j++) {
			if(j*2 == i) {
				dp[i][j] = 2;
				break;
			}
			else	dp[i][j] = (dp[i-1][j] + dp[i-2][j-1])%DIV;
		}
	}
	printf("%lld\n", dp[N][K]);
	//return 0;
}*/
/*
int dp[1001][1001];

void colorBand()
{
	int N, K, i, j;
	scanf("%d\n%d", &N, &K);
	
	for(i= 0; i<= N; i++) dp[i][0]= 1;
	dp[1][1] = 1;
	
	for(i= 2; i<= N; i++) 
		for(j= 1; j*2 <= i+1; j++)
			dp[i][j] = (dp[i-2][j-1] + dp[i-1][j]) % DIV;
	
	printf("%d\n", (dp[N-3][K-1] + dp[N-1][K])% DIV);
}*/
