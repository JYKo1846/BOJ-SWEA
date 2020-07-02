/*#include <stdio.h>
int Max(int a, int b) { return a > b ? a : b; }
long long dp[101];

void krii()
{
	int N, i, j;
	for(i= 1; i<= 6; i++) dp[i] = i; 
	scanf("%d", &N);
	for(i= 7; i<= N; i++)
		for(j= 0; i-j-3 >= 3; j++) 
			dp[i]= Max(dp[i], dp[i-j-3]*(2+j)); 
	printf("%lld\n", dp[N]);
}*/
