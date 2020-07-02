/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int v[40001];
int dp[40001];

void architect()
{
	int N, i, j, idx, size= 1;
	cin >> N;
	for(i= 0; i< N; i++) cin >> v[i];
	dp[0]= v[0];
	for(i= 0; i< N; i++) {
		if(dp[size-1] < v[i]) {
			dp[size] = v[i];
			size++;
			continue;
		}
		idx = lower_bound(dp, dp+size, v[i]) - dp;
		dp[idx] = v[i];
	}
	
	cout << size << endl;
}*/
