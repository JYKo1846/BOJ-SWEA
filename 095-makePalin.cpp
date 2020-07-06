/*#include <stdio.h>

int Min(int a, int b) { return a < b ? a : b; }

int in[5000];
int dp[5000][5000];

int pal(int st, int dst)
{
	if(st == dst || st-1 == dst) return 0;
	int& ret = dp[st][dst];
	if(in[st] == in[dst]) return ret = pal(st+1, dst-1);
	if(ret!= -1) return ret;
	return ret= Min(pal(st+1, dst) + 1, pal(st, dst-1) +1);
}

void makePalin()
{
	int N, i, j;
	scanf("%d", &N);
	for(i= 0; i< N; i++) scanf("%d", &in[i]);
	
	for(i= 0; i< N; i++) {
		for(j= 0; j< N; j++) {
			if(i==j) {
				check[i][j] = 1;
				if(i!= 0) check[i][j-1] = 1;
				continue;
			}
			dp[i][j] = -1;
		}
	}
	
	printf("%d\n", pal(0, N-1));
}*/
