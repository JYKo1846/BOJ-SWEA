/*#include <iostream>
#include <math.h>

using namespace std;

int n[10001];

int search(int stL, int stR, int dst, int res)
{
	if((stL > 10000 && stR > 10000)|| stL < 1) return 0;
	if(9860 < stL && stL < 9871) return search(9860, stR, dst, res+ abs(stL- 9860)); 
	if(n[stL] == n[dst]) {
		if(stL <= dst && dst <= stR) return res;
		else return res += abs(stL- dst) > abs(stR- dst) ? abs(stR-dst) : abs(stL-dst);
	}
	else res = search(stL+ n[stL]+1, stR+ n[stR]+2, dst, res+1);
	return res;
}

void strangeP()
{
	int T, i, lev= 1, sP= 2;
	for(i= 2; i<= 10000; i++) {
		n[i] = lev;
		if(sP + lev == i) {
			lev++; sP= i+1;
		}
	}
	cin >> T;
	for(i= 1; i<= T; i++) {
		int a, b;
		cin >> a >> b;
		if(a > b) {
			int t = a; a= b; b= t;
		}
		cout<< "#" << i << " " << search(a, a, b, 0)<< endl;
	}
}*/
