/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int tile01_dp[1000000];

void tile01()
{
	int n, i;
	
	scanf("%d", &n);
	tile01_dp[0] = 1; tile01_dp[1] = 2;
	for(i = 2; i < n; i++) tile01_dp[i] = tile01_dp[i-2] + tile01_dp[i-1];
	printf("%d\n", tile01_dp[n-1]);
}*/
