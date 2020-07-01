/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void bitonic()
{
	int n, i, j, t, max = 1;
	int a[1000], dp[2][1000] = {0, };
	
	scanf("%d", &n);
	for(i = 0; i< n; i++) scanf("%d", &a[i]);
	dp[0][0] = 1; dp[1][0] = 1;
	
	for(i = 1; i< n; i++) {
		for(j = i -1; j >= 0; j--) {
			if(a[i] > a[j]) dp[0][i] = dp[0][i] > dp[0][j] + 1 ? dp[0][i] : dp[0][j] +1;
			else if(a[i] < a[j]) {
				t = dp[0][j] > dp[1][j] ? dp[0][j] : dp[1][j];
				dp[1][i] = dp[1][i] > t + 1 ? dp[1][i] : t + 1;
			}
			if(dp[0][i] == 0) dp[0][i] = 1;
			if(dp[1][i] == 0) dp[1][i] = 1;
		}
		t = dp[0][i] > dp[1][i] ? dp[0][i] : dp[1][i];
		max = max > t ? max : t;
	}
	printf("%d\n", max);
}*/
