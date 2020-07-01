/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

long long wv[100];

void wave()
{
	int _n, i;
	scanf("%d", &_n);
	wv[0] =1; wv[1] =1; wv[2] =1; wv[3] =2; wv[4] =2;
	for(i = 5; i< _n; i++) wv[i] = wv[i-1] + wv[i-5];
	printf("%lld\n", wv[_n-1]);
}*/
