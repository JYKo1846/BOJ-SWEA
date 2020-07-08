/*#include <stdio.h>

int dp[31], ans[31];

void tileCode()
{
	int N, i;
	scanf("%d", &N);
	dp[1] = 1; dp[0] = 1;
	for(i= 2; i<= N; i++) dp[i] = dp[i-2]*2 + dp[i-1];
	for(i= 1; i<= N; i++) {
		if(!(i%2)) ans[i] = (dp[i]+ dp[i/2]+ 2*dp[(i/2)-1])/ 2;
		else ans[i] = (dp[i]+ dp[(i-1)/2])/ 2;
	}
	printf("%d\n", ans[N]);
}*/
