/*#include <stdio.h>
#include <limits.h>
#include <algorithm>

using namespace std;

int dp[500][500];
int v[500][500];

void chainmatx()
{
	int N, i, j;
	for(i= 0; i< 500; i++) {
		for(j= 0; j< 500; j++) dp[i][j]= INT_MAX;
		dp[i][i] = 0;
	}
	
	scanf("%d", &N);
	
	for(i= 0; i< N; i++) scanf("%d %d", &v[i][0], &v[i][1]);
	
	for(int cur= 1; cur< N; cur++) {
		for(i= 0; i+ cur< N; i++) {
			j= i + cur;
			for(int k= i; k< j; k++)
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + (v[i][0]* v[k][1]* v[j][1]));
		}
	}
	printf("%d\n", dp[0][N-1]);
}*/
