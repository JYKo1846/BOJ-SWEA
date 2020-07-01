/*#include <stdio.h>
#include <algorithm>
#define MAX(a, b, c) max(max(a,b),c)
#define MIN(a, b, c) min(min(a,b),c)
using namespace std;

int s[100001][3];
int dmax[2][3], dmin[2][3];

void down()
{
	int N, i, j;
	scanf("%d", &N);
	for(i = 1; i<= N; i++) scanf("%d %d %d", &s[i][0], &s[i][1], &s[i][2]);
	
	for(i= 1; i<= N; i++) {
		for(j= 0; j< 3; j++) {
			dmax[1][j] = s[i][j];
			dmin[1][j] = s[i][j];
		}
		dmax[1][0] += MAX(dmax[0][0], dmax[0][1], 0);
		dmax[1][1] += MAX(dmax[0][0], dmax[0][1], dmax[0][2]);
		dmax[1][2] += MAX(dmax[0][1], dmax[0][2], 0);
		dmin[1][0] += MIN(dmin[0][0], dmin[0][1], 900000);
		dmin[1][1] += MIN(dmin[0][0], dmin[0][1], dmin[0][2]);
		dmin[1][2] += MIN(dmin[0][1], dmin[0][2], 900000);
		for(j = 0; j< 3; j++) {
			dmax[0][j] = dmax[1][j];
			dmin[0][j] = dmin[1][j];
		}
	}
	printf("%d %d\n", MAX(dmax[0][0], dmax[0][1], dmax[0][2]), MIN(dmin[0][0], dmin[0][1], dmin[0][2]));
}
*/	
