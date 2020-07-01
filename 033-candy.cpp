/*#include <stdio.h>
#define MAX_N 500001
int pri_n= 0;
bool is_prime[MAX_N] = {0, };
long long dp[MAX_N] = {0, }; 
int c[10001] = {0, };
//void candy();
void prime();

void candy()
{
	int i, j, k, t, n;
	long long cnt = 0, tot = 0;
	prime();
	scanf("%d", &n);
	for(i= 0; i< n; i++) {
		scanf("%d", &t);
		c[t]++;
	}
	dp[0] = 1;
	
	for(i= 0; i< 10001; i++) {
		if(c[i]) {
			if(i == 0) {
				dp[0] += c[i];
				continue;
			}
			for(j= tot; j>= 0; j--) {
				for(k= 1; k<= c[i]; k++) dp[j+ (i*k)] += dp[j];
			}
		}
		tot += i*c[i];		
	}
	
	for(i = 2; i< MAX_N; i++)
		if(is_prime[i])	cnt += dp[i];
	printf("COUNT : %lld\n", cnt);
}

void prime()
{
	int i, j;
	for(i = 2; i< MAX_N; i++) {
		bool flag_p = true;
		for(j= 2; j* j<= i; j++) {
			if(i% j == 0){
				flag_p = false;
				break;
			}
		}
		if(flag_p) is_prime[i] = true;
	}
}*/
