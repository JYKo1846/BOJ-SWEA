/*#include <stdio.h>
#define MAX 10000002
int dp[2][MAX];
int v[101][2];

int Min(int a, int b) { return a < b ? a : b; }

void app()
{
	int N, M, i, j, tot= 0;
	for(i=0 ;i< 2; i++) for(j= 0; j< MAX; j++) dp[i][j] = -1;
	scanf("%d %d", &N, &M);
	
	for(i= 1; i<= N; i++) scanf("%d", &v[i][0]);
	for(i= 1; i<= N; i++) scanf("%d", &v[i][1]);
	
	dp[0][0]= 0;
	
	for(i= 1; i<= N; i++) {
		tot += v[i][0];
		if(tot >= MAX) tot = MAX;
		for(j= 0; j+ v[i][0]<= tot; j++)
			if(dp[0][j] != -1) dp[1][j+v[i][0]] = dp[0][j] + v[i][1];
		for(j= 0; j <= tot; j++) {
			if(dp[0][j]== -1) dp[0][j] = dp[1][j];
			else dp[0][j] = Min(dp[0][j], dp[1][j]);
		}
	}
	
	int res= MAX;
	for(i= M; i<= tot; i++) res = Min(res, dp[0][i]);
	printf("%d\n", res);

}
#include <stdio.h>

int v[2][101];
int dp[2][10001];

int Max(int a, int b) { return a > b ? a : b; }
int Min(int a, int b) { return a > b ? b : a; }

void app()
{
	int N, M, i, j, tot= 0;
	for(i= 0; i< 2; i++) for(j= 1; j<= 10001; j++) dp[i][j]= -1;
	scanf("%d %d", &N, &M);
	for(i= 0; i< 2; i++) for(j= 1; j<= N; j++) scanf("%d", &v[i][j]);
	
	for(i= 1; i<= N; i++) {
		for(j= 0; j<= tot; j++)
			dp[1][j+v[1][i]] = dp[0][j] + v[0][i];
		tot += v[1][i];
		for(j= 0; j<= tot; j++) {
			 if(dp[0][j] == -1) dp[0][j] = dp[1][j];
			 else dp[0][j] = Max(dp[0][j], dp[1][j]);
		}
	}
	int res = 987654321;
	for(j= 0; j<= tot; j++)	{
		if(dp[0][j] >= M){
			res= j;
			printf("%d\n", res);
			break;
		}
	}
}*/
