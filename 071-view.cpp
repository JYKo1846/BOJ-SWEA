/*#include <stdio.h>
int Max(int a, int b) { return a > b ? a : b; }

int bd[1002];

void view()
{
	int T, i, j, res= 0;
	scanf("%d", &T);
	for(i= 0; i< T; i++) scanf("%d", &bd[i]);
	for(i= 2; i< T; i++) {
		int l_m = Max(bd[i-2], bd[i-1]);
		int r_m = Max(bd[i+2], bd[i+1]);
		if(bd[tmp]- l_m > 0 && bd[tmp]- r_m > 0) res += (tmp - Max(l_m, r_m));
	}
	printf("ANS : %d\n", res);
}*/
