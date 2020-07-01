/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void coin1()
{
    int co[102];
    int dp[10002];
    int i, j, n, k;
	for(i = 0; i< 10002; i++) dp[i] = 0;
    dp[0] = 1;
    scanf("%d %d", &n, &k);
	for(i = 1; i< n+1; i++) scanf("%d", &co[i]);
	for(i = 1; i< n+1; i++) {
	    for(j = 1; j< k+1; j++)
            if(j >= co[i]) dp[j] += dp[j-co[i]];
    }
    printf("%d", dp[k]);
}*/
