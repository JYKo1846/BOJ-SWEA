/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 



long long dn[92];

long long pinary()
{
	int n = 0;
	int i;
	
	scanf("%d", &n);
	dn[0] = 0; dn[1] = 1; dn[2] = 1;
	
	for(i = 3; i < n+1; i++) dn[i] = dn[i-1] + dn[i-2];
	
	return dn[n];
}*/
