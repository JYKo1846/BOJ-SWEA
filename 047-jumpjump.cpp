/*#include <stdio.h>
#include <limits.h>

int v[1001];
int dp[1001];

void jumpjump()
{
	int N, i, j;
	scanf("%d", &N);
	for(i= 0; i<= N; i++) dp[i] = INT_MAX;
	for(i= 1; i<= N; i++) scanf("%d", &v[i]);
	
	dp[1] = 0;
	for(i= 2; i<= N; i++) {
		for(j= 1; j< i; j++) {
			if(v[j] + j >= i) dp[i] = dp[i] < dp[j]+1 ? dp[i] : dp[j]+1;
		}
	}
	int res = dp[N];
	if(res == INT_MAX) res = -1;
	printf("%d\n", res);
}*/
