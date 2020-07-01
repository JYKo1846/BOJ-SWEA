/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void leave(int cur, int prev);
int in_l[16][2];
int dp_l[16];
int _max = 0;
int __n;

void leave(int cur, int prev)
{
	int i;
	if(dp_l[cur] > prev) return ;
	dp_l[cur] = prev;
	_max = prev > _max ? prev : _max;
	if(cur == __n) return;
	for(i = cur + in_l[cur][0]; i< __n+1; i++)
		leave(i, prev + in_l[cur][1]);
}

void init_leave()
{
	int i;
	
	scanf("%d", &__n);
	for(i = 0; i< 16; i++) dp_l[i] = 0;
	for(i = 0; i<__n; i++) scanf("%d %d", &in_l[i][0], &in_l[i][1]);
	for(i = 0; i<__n; i++) leave(i, 0);
	printf("%d", _max);
}*/
