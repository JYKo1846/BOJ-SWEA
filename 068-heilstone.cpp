/*#include <stdio.h>

void heilstone()
{
	int n, res= 0;
	scanf("%d", &n);
	
	res = n > res ? n : res;
	while(n != 1) {
		if(n%2) n= n*3 + 1;
		else n/= 2;
		res = n > res ? n : res;
	}
	
	printf("%d\n", res);
}*/
