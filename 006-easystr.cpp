/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define DIV 1000000000
// ó���� ��ͷ� ����������, �޸� �������� 2��for���̿� ���� -> ������.
// n-1������ 0~9�� ������ �̿��Ͽ� n��°�� �� ���� �󸶳� ������ ����ϵ��� ������. 
long long easystr(int lev);
long long dy[100][10];
int nu;

long long easystr(int lev)
{
	int i;
	for(lev =0; lev < nu; lev++) {
		for(i = 0; i< 10; i++) {
			if(i !=0)	dy[lev+1][i-1] += dy[lev][i] % DIV;
			if(i !=9)	dy[lev+1][i+1] += dy[lev][i] % DIV;
		}
	}
	long long res = 0;
	for( i =0; i< 10; i++ ) {
		res+= dy[lev-1][i] % DIV;
	}
	return res % DIV;
}

void init_easystr()
{
	int i,j;
	
	scanf("%d", &nu);
	for(i = 0; i< 100; i++) for(j = 0; j< 10; j++) dy[i][j] = 0;
	for(i = 1; i< 10; i ++) dy[0][i] = 1; dy[0][0] = 0;
	printf("%lld",easystr(0));
}*/
