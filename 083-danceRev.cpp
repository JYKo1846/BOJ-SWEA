/*#include <stdio.h>
#define MAX 2e8

int Min(int a, int b) { return a < b ? a : b; }

int dp[100001][5][5];
int in[100001];

int retPow(int cur, int nxt)
{
	if(cur== 1 || cur== 3) {
		if(nxt== 2 || nxt== 4) return 3;
		if((cur==1 && nxt== 3)|| (cur== 3 && nxt== 1)) return 4;
	}
	if(cur== 2 || cur== 4) {
		if(nxt== 1 || nxt== 3) return 3;
		if((cur== 2 && nxt== 4)|| (cur== 4 && nxt== 2)) return 4;
	}
	if(cur== 0) return 2;
	if(cur== nxt) return 1;
}

void danceRev()
{
	int i= 1, cnt= 0, res= MAX, j;
	while(1) {
		int T= 0;
		scanf("%d", &T);
		if(T== 0) break;
		in[i++] = T;
		cnt++;
	}
	for(i= 0; i<= cnt; i++) for(j= 0; j<= 4; j++) for(int k= 0; k<= 4; k++) dp[i][j][k] = MAX;
	
	dp[1][in[1]][0] = 2;
	dp[1][0][in[1]] = 2;
	
	for(i= 1; i< cnt; i++) {
		for(j= 0; j<= 4; j++) {
			for(int k= 0; k<= 4; k++) {
				if(dp[i][j][k]!= MAX) {
					if(in[i+1] != k) dp[i+1][in[i+1]][k] = Min(dp[i+1][in[i+1]][k], dp[i][j][k] + retPow(j, in[i+1]));
					if(in[i+1] != j) dp[i+1][j][in[i+1]] = Min(dp[i+1][j][in[i+1]], dp[i][j][k] + retPow(k, in[i+1]));
				}
			}
		}
	}
	
	for(i= 0; i<= 4; i++) {
		for(j= 0; j<= 4; j++) {
			res = res > dp[cnt][i][j] ? dp[cnt][i][j] : res;
			printf("%d ", dp[cnt][i][j]);
		}
		printf("\n");
	}
	printf("%d\n", res);
}*/
