/*#include <iostream>
#include <cstring>
using namespace std;

int dp[16][1 << 16];
int v[16][16];
int N;
const int MAX = 987654321;

int travel(int cur, int stat);

int travel(int cur, int stat)
{
	int& ret= dp[cur][stat];
	if(ret != -1) return ret;
	
	if(stat == (1 << N) -1)
		return (v[cur][0]) ? v[cur][0] : MAX;
	
	ret = MAX;
	for(int i= 0; i< N; i++) {
		if(!(stat & (1 << i)) && !(v[cur][i] == 0))
			ret= min(ret, travel(i, stat | (1<<i)) + v[cur][i]);
	}
	return ret;
}


void tsp()
{
	int i, j;
	
	memset(dp, -1, sizeof(dp));
	cin >> N;
	for(i= 0; i< N; i++) for(j= 0; j< N; j++) cin >> v[i][j];
	
	cout << travel(0, 1) << endl;
}*/
