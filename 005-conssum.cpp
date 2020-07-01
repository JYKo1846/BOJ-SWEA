/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int num[100000];
long dnp[100000];
int n;

int conssum()
{
	long max;
	int i;
	
	scanf("%d", &n);
	
	for(i=0; i< n; i++) scanf("%d", &num[i]);
	dnp[0] = num[0];
	max = dnp[0];
	
	for(i = 1; i< n; i++) {
		long tmp = dnp[i-1] + num[i];
		if( tmp > num[i]) dnp[i] = tmp;
		else dnp[i] = num[i];
		if(max < dnp[i]) max = dnp[i];
	}
	
	printf("%ld", max);
	return 0;
}*/
