/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int inc_arr();

int _dp[1000];
int inarr[1000];
int arr_n;
int max;

int inc_arr()
{
	int i,j;
	int cur_i;
	
	for(i=1; i<arr_n;i++) {
		cur_i = inarr[i];
		for(j=0; j<i; j++) {
			if(_dp[i] > _dp[j]+1) continue;
			if(inarr[j] < cur_i) _dp[i] = _dp[j]+1;
		}
		if(_dp[i] == 0) _dp[i] = 1;
		if(max < _dp[i]) max = _dp[i];
	}
	return max;
}

void init_incarr()
{
	int i;
	
	scanf("%d", &arr_n);
	for(i = 0; i< 1000; i++) _dp[i] = 0;
	for(i = 0; i< arr_n; i++) scanf("%d", &inarr[i]);
	_dp[0] = 1; max = 1;
	printf("%d", inc_arr());
}*/
