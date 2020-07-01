/*#include <stdio.h>

int dp[100001];

void zoo()
{
	int n, i;
	scanf("%d", &n);
	dp[0] = 1; dp[1] =3;
	for(i = 2; i<= n; i++) dp[i] = (2*dp[i-1] + dp[i-2]) % 9901;
	printf("%d\n", dp[n]% 9901);
}*/
