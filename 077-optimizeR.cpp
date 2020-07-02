/*#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#define MAX 2e9
using namespace std;
int abs(int a) { return a > 0 ? a : -1*(a); }
int calc(pair<int, int> A, pair<int, int> B) { return abs(A.first - B.first) + abs(A.second - B.second); }

pair<int, int> pos[12];
int dp[11][1<< 11];
int N;

int tsp(int cur, int stat)
{
	if(stat == (1<<N+1)-1) return calc(pos[cur], pos[N+1]);
	if(dp[cur][stat] != -1) return dp[cur][stat];
	dp[cur][stat] = MAX;
	for(int i= 1; i<= N; i++) {
		if(stat & (1<< i)) continue; 
		dp[cur][stat] = min(dp[cur][stat], tsp(i, stat | (1<<i)) + calc(pos[cur], pos[i]));
	}
	return dp[cur][stat];
}

void optimizeR()
{
	int T, i, j;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> T;
	for(i= 1; i<= T; i++) {
		for(j= 0; j< 11; j++) for(int k= 0; k< 1<< 11; k++) dp[j][k] = -1;
		
		cin >> N;
		cin >> pos[0].first >> pos[0].second >> pos[N+1].first >> pos[N+1].second;
		for(j= 1; j<= N; j++)
			cin >> pos[j].first >> pos[j].second;
		
		cout << "#" << i << " " << tsp(0, 1)<< endl;
	}
}*/
