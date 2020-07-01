/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void climb()
{
	int st[301];
	int dp[301][2];
	int i, j, n;
	for(i = 0; i< 301; i++) for(j =0; j< 2; j++) dp[i][j] = 0;
	scanf("%d", &n);
	for(i = 1; i< n+1; i++) scanf("%d", &st[i]);
	dp[1][0] = st[1];
	dp[2][0] = st[1] + st[2]; dp[2][1] = st[2];
	for(i = 3; i< n+1; i++) {
		dp[i][0] = dp[i-1][1] + st[i];
		dp[i][1] = dp[i-2][0] > dp[i-2][1]? dp[i-2][0] + st[i]: dp[i-2][1] + st[i];
	}
	printf("%d\n", dp[n][0] > dp[n][1] ? dp[n][0] : dp[n][1]);
}
*/
