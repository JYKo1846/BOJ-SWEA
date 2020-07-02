/*#include <stdio.h>

int dp[201];
int v[201];

void lineup()
{
	int N, i, maxleng= 0;
	scanf("%d", &N);
	
	for(i= 0; i< N; i++) scanf("%d", &v[i]);
	
	dp[0] = 1;
	for(i= 1; i< N; i++) {
		int t= 0;
		for(int j= 0; j< i; j++)
			if(v[j] < v[i]) t = dp[j] > t ? dp[j] : t;
		dp[i] = t+1;
		maxleng = maxleng > dp[i] ? maxleng : dp[i];
	}
	
	printf("%d\n", N- maxleng);
}*/
