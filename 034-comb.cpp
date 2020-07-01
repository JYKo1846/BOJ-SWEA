/*#include <stdio.h>
#include <algorithm>
#define MAX 50000002

using namespace std;

int dp[501][501];
int f[501];
int sum[501];

void comb()
{
	int N, i;
	scanf("%d", &N);
	for(i= 1; i<=N; i++) {
		scanf("%d", &f[i]);
		sum[i] = sum[i-1] + f[i];
	}
	
	for(i= 1;i< N; i++) {
		for(int j= 1; j + i<= N; j++) {
			int k= j + i;
			dp[j][k] = MAX;
			for(int mid = j; mid < k; mid++)
				dp[j][k] = min(dp[j][k], dp[j][mid] + dp[mid+1][k] + sum[k]- sum[j-1]);	
		}
	}
	
	printf("%d\n", dp[1][N]);
}*/
