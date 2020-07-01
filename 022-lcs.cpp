/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int lcs_dp[1001][1001] = {0, };

void lcs()
{
	char A[1001];
	char B[1001];
	
	int i, j, max =-1;
	
	scanf("%s\n%s", A, B);
	
	for(i = 0; A[i] != '\0'; i++) {
		for(j = 0; B[j] != '\0'; j++) {
			if(A[i] == B[j])
				lcs_dp[i+1][j+1] = lcs_dp[i][j] +1;
			else
				lcs_dp[i+1][j+1] = lcs_dp[i][j+1] > lcs_dp[i+1][j] ? lcs_dp[i][j+1] : lcs_dp[i+1][j];
			max = max > lcs_dp[i+1][j+1] ? max : lcs_dp[i+1][j+1];
		}
	}
	printf("%d\n", max);
}*/
