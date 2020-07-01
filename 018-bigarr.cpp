/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void bigarr();

void bigarr()
{
	int n, i, j, max = 0;
	int a[1000], dp[1000] = {0, };
	
	scanf("%d", &n);
	for(i = 0; i< n; i++) {
		scanf("%d", &a[i]);
		dp[i] = a[i];
	}
	
	for(i = 0; i< n; i++) {
		for(j = i-1; j >= 0; j--) {
			if(a[i] > a[j])
				dp[i] = dp[i] > dp[j] + a[i] ? dp[i] : dp[j] + a[i];
		}
		max = max > dp[i] ? max : dp[i];
	}
	printf("%d\n", max);
}*/
