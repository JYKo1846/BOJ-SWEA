/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int n2_tile(int width);

int dp[1002];

int n2_tile(int width)
{
	int i;
	for(i = 0; i< 1002; i++) dp[i] = -1;
	for(i = 0; i< 3; i++) dp[i] = i;
	for(i = 3; i< 1002; i++) dp[i] = (dp[i-1] + dp[i-2]) % 10007; 
	return dp[width];
}
*/
