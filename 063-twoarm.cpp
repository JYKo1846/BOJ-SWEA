/*#include <stdio.h>
#include <math.h>

int sink[31];
int marb[8];
bool dp[15001][2];

void twoarm()
{
	int N, M, i, j;
	scanf("%d", &N);
	for(i= 0; i< N; i++) scanf("%d", &sink[i]);
	scanf("%d", &M);
	for(i= 0; i< M; i++) scanf("%d", &marb[i]);
	
	dp[0][0] = 1;
	for(i= 0; i< N; i++) {
		for(j= 0; j + sink[i]<= 15000; j++) {
			if(dp[j][0]) {
				dp[j+ sink[i]][1] = dp[j][0];
				dp[abs(j - sink[i])][1] = dp[j][0];
			}
		}
		for(j= 1; j <= 15000; j++) {
			dp[j][0] |= dp[j][1];
			dp[j][1] = 0;
		}
	}
	
	for(i= 0; i< M; i++) {
		if(marb[i] <= 15000 && dp[marb[i]][0]) printf("Y");
		else printf("N");
		printf(" ");
	}
	printf("\n");
	
	for(i= 0; i<= 20; i++) printf("%d ", dp[i][0]);
}*/
