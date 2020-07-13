/*#include <stdio.h>
#include <string.h>
#define LMT 250000
#define INF 2e7
int in[50], dp[52][LMT+1];
int N;

int Max(int a, int b) { return a > b ? a : b; }

int f(int x, int h)
{
	if(h> LMT) return -INF;
	if(x== 0&& h) return -INF;
	if(x== 0&& h== 0) return 0;
	int &ret = dp[x][h];
	if(ret != -1) return ret;
	ret = f(x-1, h);
	ret = Max(ret, f(x-1, h+in[x-1]));
	if(h > in[x-1])
		ret = Max(ret, f(x-1, h-in[x-1])+ in[x-1]);
	else
		ret = Max(ret, f(x-1, in[x-1]- h) + h);
	return ret;
}

void sameTower()
{
	memset(dp, -1, sizeof(dp));
	scanf("%d", &N);
	for(int i= 1; i<= N; i++) in[i] = i;
	int R= f(N, 0);
	printf("%d : %d\n", N, R ? R : -1);
}*/
