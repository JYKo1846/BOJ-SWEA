/*#include <stdio.h>
#include <limits.h>

long long dp[1000002];

void decNum()
{
	int N, s= 0, e= 9, cur= 10;
	long long i, j, k;
	scanf("%d", &N);
	
	for(i= 0; i< 1000002; i++) dp[i] = -1;
	for(i= 0; i< 10; i++) dp[i]= i;

	for(i= 10; i< 10000000000; i*= 10){
		int tmp_s = e+1;
		for(j= 1; j< 10; j++) {
			for(k= s; dp[k]/(i/10) < j; k++) {
				dp[cur++] = (i*j) + dp[k];
				if(tmp_s == cur-1) tmp_s = cur-1;
			}
		}
		s = tmp_s;
		e= cur-1;
	}
	
	printf("%lld\n", dp[N]);
}*/
