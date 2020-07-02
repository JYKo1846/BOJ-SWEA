/*#include <stdio.h>

int Min(int a, int b) { return a < b ? a : b; }

int in[201];
int dp[201][201];

int div(int st, int dst)
{
	int &ret = dp[st][dst];
	if(st==dst) ret= 0;
	if(ret!= -1) return ret;
	ret= 2e9;
	for(int k= st; k< dst; k++) {
		int l= div(st, k);
		int r= div(k+1, dst);
		ret= Min(ret, l+ r+ (in[st]!= in[k+1]));
	}
	return ret;
}

void bulb()
{
	int N, K, i, j;
	scanf("%d %d", &N, &K);
	for(i= 1; i<= N; i++) for(j= 1; j<= N; j++) dp[i][j]= -1;
	for(i= 1; i<= N; i++) scanf("%d", &in[i]);
	printf("%d\n", div(1, N));
}*/
