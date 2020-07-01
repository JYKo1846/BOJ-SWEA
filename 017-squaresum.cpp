/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void sqrsum()
{	
	int dp[100011];
	int n, t, i, j;

	scanf("%d", &n);
	for(i = 0; i< 100001; i++) dp[i] = 100001;
	for(i = 1; i< 320; i++) {
		t = i*i;
		if(t > 100000) break;
		dp[t] = 1;
	}
	for(i = 1; i < n+1; i++) {
		for(j = 1; j*j< i; j++)
			if(dp[j*j] == 1) {
				t = dp[j*j] + dp[i - j*j];
				dp[i] = dp[i] > t ? t : dp[i];
			}
	}
	printf("%d\n", dp[n]);		
}
*/
