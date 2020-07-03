/*#include <stdio.h>

int parent[51], in[51][51], know[51];

int Find(int x)
{
	if(parent[x]== x) return x;
	return Find(parent[x]);
}

void Union(int x, int y) 
{
	x= Find(x);
	y= Find(y);
	parent[x] = y;
}

void lie()
{
	int N, M, T, i, j, k, res= 0;
	
	scanf("%d %d", &N, &M);
	scanf("%d", &T);
	for(i= 1; i<= T; i++) scanf("%d", &know[i]);
	for(i= 1; i<= N; i++) parent[i] = i;
	for(i= 1; i<= M; i++) {
		scanf("%d", &in[i][0]);
		scanf("%d", &in[i][1]);
		for(j= 2; j<= in[i][0]; j++) {
			scanf("%d", &in[i][j]);
			Union(in[i][j-1], in[i][j]);
		}
	}
	for(i= 1; i<= M; i++) {
		for(j= 1; j<= in[i][0]; j++) {
			int mem = Find(in[i][j]);
			for(k = 1; k<= T; k++)
				if(mem == Find(know[k])) break;
		}
		if(k== T+1) res++;
	}
	printf("%d\n", res);
}*/
