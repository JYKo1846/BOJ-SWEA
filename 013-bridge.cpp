/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

long long b_dp[31][31];

long long bridge(int x, int y);

long long bridge(int x, int y) {
	if( b_dp[x][y] != -1) return b_dp[x][y];
	else return bridge(x-1, y-1) + bridge(x, y-1);
}
	

void init_bridge()
{
	int n , m, i, j;
	
	scanf("%d %d", &n, &m);
	for(i = 0; i< 31; i++) {
		for(j = 0; j < 31; j++) {
			if(i > j) b_dp[i][j] = 0;
			else if(i == j) b_dp[i][j] = 1;
			else if(i == 1) b_dp[i][j] = j;
			else b_dp[i][j] = -1;
		}
	}
	printf("%lld\n", bridge(n,m));
}*/
