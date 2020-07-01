/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int downhill(int x, int y);

int map[501][501] = {0, };
int map_dp[501][501];
int map_vecX[4] = {-1, 0, 1, 0};
int map_vecY[4] = {0, 1, 0, -1};
int map_n, map_m;

int downhill(int x, int y)
{
	int i;
	if(x == map_n && y == map_m) return 1;
	if(map_dp[x][y] != -1) return map_dp[x][y];
	else {
		map_dp[x][y] = 0;
		for(i = 0; i< 4; i++) {
			int dx = x + map_vecX[i];
			int dy = y + map_vecY[i];
			if(map[x][y] > map[dx][dy] && dx > 0 && dx <= map_n && dy > 0 && dy <= map_m)
				map_dp[x][y] += downhill(dx, dy);
		}
	}
	return map_dp[x][y];
}

void init_downhill()
{
	int i, j;
	for(i = 0; i<= 501; i++) for(j = 0; j<= 501; j++) map_dp[i][j] = -1;
	scanf("%d %d", &map_n, &map_m);
	for(i = 1; i<= map_n; i++) for(j = 1; j<= map_m; j++) scanf("%d", &map[i][j]);
	printf("%d\n", downhill(1, 1));
}*/
