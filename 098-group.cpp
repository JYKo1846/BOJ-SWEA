#include <stdio.h>

int in[1000];
int jud[1000][1000];
int dp[1000][1000];

int Abs(int a) { return a < 0 ? -1*a : a; }
int Max(int a, int b) { return a > b ? a : b; }

int func(int st, int dst)
{
	int &ret = dp[st][dst];
	if(st== dst || st +1 == dst) return ret = jud[st][dst];
	if(dp[st][dst]!= -1) return ret;
	for(int k= st; k< dst; k++) {
		ret = Max(ret, func(st, k) + func(k+1, dst));
	}
	ret = Max(ret, jud[st][dst]);
	return ret;
}

void group()
{
	int N, i, j;
	scanf("%d", &N);
	for(i= 0; i< N; i++) for(j= 0; j< N; j++) dp[i][j] = -1;
	for(i= 0; i< N; i++) scanf("%d", &in[i]);
	for(i= 0; i< N; i++) {
		for(j= i+1; j< N; j++) {
			jud[i][j] = jud[i][j-1];
			for(int k= i; k < j; k++) jud[i][j] = Max(jud[i][j], Abs(in[j]- in[k]));
		}
	}
	
	printf("%d\n", func(0, N-1));
	for(i= 0; i< N; i++) {
		for(j= 0; j< N; j++) printf("%d ", jud[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i= 0; i< N; i++) {
		for(j= 0; j< N; j++) printf("%d ", dp[i][j]);
		printf("\n");
	}
}
