/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


long long tile_dp[1001];

void n2_tile2()
{
	int _n, i;
	scanf("%d", &_n);
	
	tile_dp[0] = 1; tile_dp[1] = 3;
	for(i = 2; i< _n; i++) tile_dp[i] = ((tile_dp[i-2]*2) + tile_dp[i-1]) % 10007;
	
	printf("%lld", tile_dp[_n-1]);
}*/
