/*#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

#define MAX 7654321

int dp[1001][1001][3];
int acc[1001][2];
vector<int> mv;

void police()
{
	int N, C, i, j, one, two;
	int resX, resY, res= MAX;
	
	scanf("%d", &N);
	scanf("%d", &C);
	for(i= 1; i<= C; i++) scanf("%d %d", &acc[i][0], &acc[i][1]);
	dp[1][0][0] = abs(1- acc[1][0]) + abs(1- acc[1][1]);
	dp[0][1][0] = abs(N- acc[1][0]) + abs(N- acc[1][1]);
	
	for(i= 2; i<= C; i++) {
		int t, x, y, val;
		t = abs(acc[i][0] - acc[i-1][0]) + abs(acc[i][1] - acc[i-1][1]);
		for(one= 0; one < i-1; one++) {
			dp[one][i][0] = dp[one][i-1][0] + t;
			dp[one][i][1] = one; dp[one][i][2] = i-1;
		}
		dp[i-1][i][0] = MAX;
		for(two= 0; two < i-1; two++) {
			x= acc[two][0], y= acc[two][1];
			if(two== 0) { x= N; y= N; }
			val = dp[i-1][two][0] + abs(x- acc[i][0]) + abs(y- acc[i][1]);
			if(dp[i-1][i][0] > val) {
				dp[i-1][i][0] = val;
				dp[i-1][i][1] = i-1; dp[i-1][i][2] = two;
			}
		}
		
		for(two= 0; two< i-1; two++) {
			dp[i][two][0] = dp[i-1][two][0] + t;
			dp[i][two][1] = i-1; dp[i][two][2] = two;
		}
		dp[i][i-1][0] = MAX;
		for(one= 0; one < i-1; one++) {
			x= acc[one][0], y= acc[one][1];
			if(one== 0) { x= 1; y= 1; }
			val= dp[one][i-1][0] + abs(x- acc[i][0]) + abs(y- acc[i][1]);
			if(dp[i][i-1][0] > val) {
				dp[i][i-1][0] = val;
				dp[i][i-1][1] = one; dp[i][i-1][2] = i-1;
			}
		}
	}
	for(i= 0; i< C; i++) {
		if(res > dp[i][C][0]) {
			res = dp[i][C][0];
			resX= i; resY= C;
		}
	}
	for(i= 0; i< C; i++) {
		if(res > dp[C][i][0]) {
			res = dp[C][i][0];
			resX= C; resY= i;
		}
	}
	printf("%d\n", res);
	//printf("%d\n%d %d %d %d\n", res, resX, resY,dp[resX][resY][1], dp[resX][resY][2]);
	//printf("%d %d\n", dp[dp[resX][resY][1]][dp[resX][resY][2]][1],dp[dp[resX][resY][1]][dp[resX][resY][2]][2]);
	
	//for(i= 0; i<= C; i++) {
	//	for(j= 0; j<= C; j++) printf("%d ", dp[i][j][0]);
	//	printf("\n");
	//}
	for(i= C; i > 0; i--) {
		int x= dp[resX][resY][1], y= dp[resX][resY][2];
		int car;
		
		if(resX== x) car = 2;
		else if(resY== y) car = 1;
		mv.push_back(car);
		resX = x; resY= y;
	}
	
	for(i= mv.size()-1; i>= 0; i--) printf("%d\n", mv[i]);
}*/
