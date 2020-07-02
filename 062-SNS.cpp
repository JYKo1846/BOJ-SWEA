/*#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int dp[1000002][2];
vector<int> in[1000002];
vector<int> ch[1000002];

int dfs(int cur, bool isEA) {
	int &res= dp[cur][isEA];
	if(res ^ -1) return res;
	res = 0;
	if(!isEA)
		for(auto nxt : ch[cur]) res += dfs(nxt, 1);
	else {
		for(auto nxt = ch[cur])
			res += min(dfs(nxt, 0), dfs(nxt, 1));
		res++;
	}
	return res;
}

void tree(int cur, int prv)
{
	for(auto nxt : in[cur]) {
		if(nxt ^ prv) {
			ch[cur].push_back(nxt);
			tree(nxt, cur);
		}
	}
}

void SNS()
{
	int N, i, t1, t2;
	scanf("%d", &N);
	for(i= 0; i<= N; i++){ dp[i][0] = -1; dp[i][1] = -1; }
	for(i= 0; i< N-1; i++) {
		scanf("%d %d", &t1, &t2);
		in[t1].push_back(t2);
		in[t2].push_back(t1);
	}
	tree(1, 0);
	
	printf("%d\n", min(dfs(1, 0), dfs(1, 1)));
}*/
