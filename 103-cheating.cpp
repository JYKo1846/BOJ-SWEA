/*#include <iostream>
#include <cstring>
#include <utility>

using namespace std;

char in[12][12];
pair<int, int> pleft[102];
pair<int, int> pright[102];
int match[102];
int map[102][102];
bool visited[102];
int L, R;

bool dfs(int p)
{
	if(visited[p]) return 0;
	visited[p]= 1;
	for(int i= 1; i< R; i++) {
		if(map[p][i]) {
			if(match[i] == -1 || dfs(match[i])) {
				match[i] = p;
				return 1;
			}
		}
	}
	return 0;
}

void cheating()
{
	int dx[4]= {-1, -1, 0, 0}, dy[4]= {-1, 1, 1, -1};
	int T, n, m, i, j;
	
	cin >> T;
	while(T--) {
		memset(map, 0, sizeof(map)); 
		L= 1, R= 1;
		cin >> n >> m;
		for(i= 0; i< n; i++) cin >> in[i];
		
		// make bipartite graph
		for(i= 0; i< m; i+= 2)
			for(j= 0; j< n; j++)
				if(in[j][i]== '.') pleft[L++]= make_pair(j, i);
		for(i= 1; i< m; i+= 2)
			for(j= 0; j< n; j++)
				if(in[j][i]== '.') pright[R++]= make_pair(j, i);
		
		// mapping left node <-> right node
		for(i= 1; i< L; i++) {
			int lx= pleft[i].first, ly= pleft[i].second;
			for(j= 1; j< R; j++) {
				int rx= pright[j].first, ry= pright[j].second;	
				for(int k= 0; k< 4; k++) {
					if(lx+ dx[k]== rx && ly+ dy[k]== ry) map[i][j]= 1;
					if(rx+ dx[k]== lx && ry+ dy[k]== ly) map[i][j]= 1;
					// map[i][j] = left의 i번째 노드와 right의 j번째 노트와의 연결 여부를 저장하는 배열 
				}
			}
		}
		
		int res= 0;
		memset(match, -1, sizeof(match));
		for(i= 1; i< L; i++) {
			memset(visited, 0, sizeof(visited));
			res+= dfs(i);
		}
		cout << L+R-res-2 << endl;
	}
}*/
