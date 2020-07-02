/*#include <stdio.h>
int Max(int a, int b) { return a > b ? a : b; }

int in[50001];
int dp[3][50001];

void smallTrain()
{
	int N, C, i, j, k, res = 0;
	scanf("%d", &N);
	for(i= 1; i<= N; i++) scanf("%d", &in[i]);
	scanf("%d", &C);
	
	for(i= 1; i+C -1 <= N; i++)	for(j= i; j< i+C; j++) dp[0][i] += in[j];
	for(i= 1; i<= 2; i++){
        int t= 0;
		for(j= i*C+1; j+C -1<= N; j++) {
			t = Max(t, dp[i-1][j-C]);
            dp[i][j] = t + dp[0][j];
        }
    }
	for(i= 1; i<= N; i++) res = Max(res, dp[2][i]);
	printf("%d\n", res); 
}*/
