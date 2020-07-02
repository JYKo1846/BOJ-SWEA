/*#include <stdio.h>

void seat()
{
	int dp[41] = {0, };
	bool vip[41];
	int N, M, t, i;
	for(i= 0; i< 41; i++) vip[i]= false;
	
	scanf("%d", &N);
	scanf("%d", &M);
	for(i= 0; i< M; i++) {
		scanf("%d", &t);
		vip[t] = true;
		vip[t+1] = true;
	}
	dp[0] = 1; dp[1] = 1;
	
	for(i= 2; i<= N; i++) {
		if(vip[i]) dp[i] = dp[i-1];
		else dp[i] = dp[i-1] + dp[i-2];
	}
	printf("%d\n", dp[N]);
}*/
