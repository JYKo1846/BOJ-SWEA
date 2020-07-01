/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void arrsum()
{
	int arr[300][300] = {0, };
	int i, j, k, N, M, T, a, b, x, y;
	
	scanf("%d %d", &N, &M);
	for(i = 0; i< N; i++) for(j = 0; j< M; j++) scanf("%d", &arr[i][j]);
	
	scanf("%d", &T);
	for(i = 0; i< T; i++) {
		int sum = 0;
		scanf("%d %d %d %d", &a, &b, &x, &y);
		if(a == x) for(j = b-1; j< y; j++) sum+= arr[a-1][j];
		else if(b == y) for(j = a-1; j< x; j++) sum+= arr[j][b-1];
		else
			for(j = a-1; j< x; j++) for(k = b-1; k< y; k++) sum+= arr[j][k];
		printf("%d\n", sum);
	}
}*/
