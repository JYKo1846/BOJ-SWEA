/*#include <stdio.h>

int dp[1001][5];

int func(int n, int st)
{
	int &ret = dp[n][st];
	if(n < 0) return 0;
	if(n== 0) return st== 0;
	if(ret != -1) return ret;
	switch(st) {
		case 0 : 
			ret= func(n-1, 0)+ func(n-2, 0)+ func(n-1, 1)+ func(n-1, 2)+ func(n-1, 4);
			break;
		case 1 :
			ret= func(n-1, 0)+ func(n-1, 3);
			break;
		case 2 :
			ret= func(n-1, 0)+ func(n-1, 4);
			break;
		case 3 : 
			ret= func(n-1, 1);
			break;
		case 4 :
			ret= func(n-1, 0) + func(n-1, 2);
			break;
		}
	return ret;
}

void fillTile()
{
	int N, T, i, j;
	scanf("%d", &T);
	for(i= 0; i< 1001; i++) for(j= 0; j< 5; j++) dp[i][j]= -1;
	for(i= 1; i<= T; i++) {
		scanf("%d", &N);
		printf("%d\n", func(N, 0));
	}
}*/
