/*#include <stdio.h>
#include <math.h>
#define MAX 402

int Min(int a, int b) { return a < b ? a : b; }
int dp[21][21];

void cupboard()
{
	int ob[21];
	int N, M, A, B, i, j;
	scanf("%d %d %d %d", &N, &A, &B, &M);
	for(i= 1; i<= M; i++) scanf("%d", &ob[i]);
	
	dp[1][0] = abs(A- ob[1]); dp[0][1] = abs(B- ob[1]);
	for(i= 2; i<= M; i++) {
		int t = abs(ob[i]- ob[i-1]);
		dp[i][0] = dp[i-1][0] + t;
		dp[0][i] = dp[0][i-1] + t;
	}
	
	for(i= 1; i<= M; i++) {
		for(j= 1; j<= M; j++) {
			int T;
			if(i> j) {
				int ap;
				T= i-1; 
				if(T== j) {
					dp[i][j]= MAX;
					for(int k = 0; k< T; k++){
						if(k== 0) ap= A;
						else ap= ob[k];
						dp[i][j]= Min(dp[i][j], dp[k][j]+ abs(ob[i]- ap));
					}
				}
				else {
					ap= ob[T];
					dp[i][j] = dp[T][j] + abs(ob[i] - ap);
				}
			}
			if(i< j) {
				int bp;
				T= j-1; 
				if(T== i) {
					dp[i][j]= MAX;
					for(int k= 0; k< T; k++) {
						if(k== 0) bp= B;
						else bp= ob[k];
						dp[i][j] = Min(dp[i][j], dp[i][k]+ abs(ob[j]- bp));;
					}
				}
				else {
					bp= ob[T];
					dp[i][j] = dp[i][T] + abs(ob[j]- bp);
				}
			}
		}
	}
	int res= MAX;
	for(i=0; i< M; i++) {
		int T = dp[i][M] < dp[M][i] ? dp[i][M] : dp[M][i];
		res = res < T ? res : T;
	}
	printf("ANS : %d\n", res);
	
	for(i= 0; i<= M; i++) {
		for(j= 0; j<= M; j++) printf("%d ", dp[i][j]);
		printf("\n");
	}
}*/
