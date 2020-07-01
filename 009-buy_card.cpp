/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

long _dn[1000];
int cost[1002];
int cardN;

long buycard()
{
	int i,j;
	
	scanf("%d", &cardN);
	for(i = 0; i< cardN; i++) {
		scanf("%d", &cost[i]);
		_dn[i+1] = cost[i];
	}
	for(i = 2; i < cardN+1; i++) {
		for(j = 1; j < i; j++) {
			long tmp = _dn[i-j] + _dn[j]; 
			_dn[i] = _dn[i] > tmp ? _dn[i] : tmp;
		}
	}
	return _dn[cardN];
}*/
