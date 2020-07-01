/*#include <stdio.h>

int arr[1001][1001]= {0, };
int dp[1001][1001]= {0, };

void largeSqr()
{
	char tmp[1001];
	int n, m, i, j, max = 0;
	scanf("%d %d", &n, &m);
	for(i= 1; i<= n; i++) {
		scanf("%s", tmp);
		for(j= 0; j< m; j++) {
			if(tmp[j] == '0') arr[i][j+1] = 0;
			else arr[i][j+1] = 1;
		}
	}
	for(i= 1; i<= n; i++) for(j= 1; j<= m; j++) {
		if(arr[i][j] == 1) {
			dp[i][j] = 1;
			int t = dp[i-1][j-1] > dp[i-1][j] ? dp[i-1][j] : dp[i-1][j-1];
			t = t > dp[i][j-1] ? dp[i][j-1] : t;
			dp[i][j] = t + 1;
		}
		max = dp[i][j] > max ? dp[i][j] : max;
	}
	printf("%d\n", max * max);
}*/
