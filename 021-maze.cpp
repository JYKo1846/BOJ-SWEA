/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int can[1001][1001] = {0, };

void maze()
{	
	int N, M, i, j;
	
	scanf("%d %d", &N, &M);
	
	for(i = 1; i<= N; i++) for(j = 1; j<= M; j++) scanf("%d", &can[i][j]);
	for(i = 1; i<= N; i++) for(j = 1; j<= M; j++) {
		int t = can[i-1][j] > can[i-1][j-1] ? can[i-1][j] : can[i-1][j-1];
		t = can[i][j-1] > t ? can[i][j-1] : t;
		can[i][j] += t;
	}
	printf("%d\n", can[N][M]);
}*/
