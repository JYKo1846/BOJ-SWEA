/*#include <stdio.h>

int Min(int a, int b) { return a < b ? a : b; }

int cann[122][2];
int dp[300001];

void captain()
{
	int N, i, j;
	cann[1][0] = cann[1][1] = 1;
	for(i= 1; i< 300001; i++)	dp[i]= -1;
	for(i= 2; i<= 121; i++) {
		cann[i][0] = cann[i-1][0] + i;
		cann[i][1] = cann[i][0] + cann[i-1][1];
	}
	
	scanf("%d", &N);
	for(i= 121; i> 0; i--) {
		if(cann[i][1] > N) continue;
		for(j= 0; j+ cann[i][1] <= N; j++) {
			if(dp[j]!= -1) {
				if(dp[j+ cann[i][1]] == -1) dp[j+ cann[i][1]]= 2e9;
				dp[j+ cann[i][1]] = Min(dp[j+ cann[i][1]], dp[j] + 1);
			}
		}
	}
	printf("ANS : %d\n", dp[N]);
}*/
