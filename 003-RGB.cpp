/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define mini(a, b) ((a) < (b) ? (a) : (b))
#define MAXINT 10000001


int rgb(int n);

// �ð��ʰ� �ɸ� �ٸ������ �ڵ� ���� �м��غ���
// �ذ�Ϸ�  -> ��ͷ� �ذ��ϴ°��� �ƴ�, 2��for������ �ð��� ������״�. ... 

int house_n;
int color[1003][3];
int dyp[1003][3];
int min = MAXINT;

int rgb(int n)
{
	int cur, i;

	for(;n < house_n; n++) {
		for(cur = 0; cur< 3; cur++) {
			if(cur == 0) dyp[n][cur] = color[n][cur] + mini(dyp[n-1][1], dyp[n-1][2]);
			if(cur == 1) dyp[n][cur] = color[n][cur] + mini(dyp[n-1][0], dyp[n-1][2]);
			if(cur == 2) dyp[n][cur] = color[n][cur] + mini(dyp[n-1][0], dyp[n-1][1]);
		}
	}
	n--;
	if(house_n == 1) n = 0;
	min = mini(dyp[n][0], dyp[n][1]);
	min = mini(min, dyp[n][2]);
	return min;
}


void init_rgb()
{
	int i,j;
	
	scanf("%d", &house_n);
	
	for(i = 0; i< house_n; i++) {
		for(j = 0; j< 3; j++) {
			scanf("%d", &color[i][j]);
			dyp[i][j] = MAXINT;
		}
	}
	dyp[0][0] = color[0][0]; dyp[0][1] = color[0][1]; dyp[0][2] = color[0][2];
	printf("%d", rgb(1));
}*/
