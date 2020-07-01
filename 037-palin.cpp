/*#include <stdio.h>
#include <algorithm>

int n[2001];
bool dp[2002][2002];

void palin()
{
	int N, T, i, j;
	scanf("%d", &N);
	
	for(i= 1; i<= N; i++) {
		scanf("%d", &n[i]);
		dp[i][i-1] = 1; dp[i][i] = 1;
	}
	
	for(i= 1; i< N; i++) {
		for(j= 1; j<= N-i; j++) {
			int k= 	i+j;
			dp[j][k] = (n[j] == n[k])* dp[j+1][k-1];
		}
	}

	scanf("%d", &T);
	int x, y;
	for(i= 0; i< T; i++) {
		scanf("%d %d", &x, &y);
		printf("%d\n", dp[x][y]);
	}
}
*/
