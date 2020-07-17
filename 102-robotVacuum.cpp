/*#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>
#define INF 300
#define SIZE 21
using namespace std;

int in[SIZE][SIZE];
int res[SIZE][SIZE], dist[SIZE][SIZE], dp[12][1<<12];
int vx[4] = {0, -1, 0, 1}, vy[4]= {1, 0, -1, 0};
int a, b, dirtyN;

void bfs(int x, int y)	// 계속 런타임 오류가 났던 이유 : bfs 함수의 타입을 void 가 아닌, 재귀적으로 구현한 int 타입 반환이었기 떄문 
{						// 함수 타입을 잘 체크하자. 
	bool check[SIZE][SIZE]= {0, };
	queue<pair<int, int>> q;
	
	check[x][y]= true;
	q.push(make_pair(x, y));
	
	while(!q.empty()) {
		int xx= q.front().first, yy= q.front().second;
		q.pop();
		
		for(int i= 0; i< 4; i++) {
			int nx= xx+ vx[i], ny= yy+ vy[i];
			if(nx< 0 || nx>= b || ny< 0 || ny>= a) continue;
			if(in[nx][ny]== 9 || check[nx][ny]) continue;
			check[nx][ny]= true;
			q.push(make_pair(nx, ny));
			dist[nx][ny] = dist[xx][yy]+ 1;
		}
	}
}
/*  DP로 풀으려고 했으나 아마 스택 오버플로우 때문인지 런타임 오류가 나왔다.
	그래서, next_permutation을 이용하여 해결함. */
int srch(int cur, int stat)
{
	if(stat == ((1<< dirtyN) -1)) return 0;
	int &ret= dp[cur][stat];
	if(ret != -1) return ret;
	ret= INF;
	for(int i= 1; i< dirtyN; i++)
		if(!(stat & (1<< i)))
			ret= min(ret, srch(i, stat| (1<< i))+ res[cur][i]);
	return ret;
}
	
void robotVacuum()
{
	int i, j;
	while(1) {
		vector<pair<int, int>> poin(1);
		memset(in, 0, sizeof(in));
		memset(dp, -1, sizeof(dp));
		string T;
		cin >> a >> b;
		if(!a && !b) break;
		for(i= 0; i< b; i++) {
			cin >> T;
			for(j= 0; j< a; j++) {
				if(T[j]== 'o') poin[0]= make_pair(i, j);
				else if(T[j]== '*') poin.push_back(make_pair(i, j));
				else if(T[j]== 'x') in[i][j]= 9;
			}
		}
		dirtyN= poin.size();
		memset(res, 0, sizeof(res));
		for(i= 0; i< dirtyN; i++) {
			memset(dist, 0, sizeof(dist));
			bfs(poin[i].first, poin[i].second);
			for(j= 0; j< dirtyN; j++) {
				res[i][j]= dist[poin[j].first][poin[j].second];
				if(i== j) res[i][j]= INF;
			}
		}
		
		for(i= 0; i<= dirtyN; i++) {
			for(j= 0; j< dirtyN; j++) cout << res[i][j] << " ";
			cout << endl;
		}
		/*int R= INF; bool flag= 1;
		vector<int> calc(dirtyN-1);
		for(i= 0; i< calc.size(); i++) calc[i]= i+1;
		do{
			int cur= res[0][calc[0]];
			if(!cur) { flag= 0; break; }
			for(i= 0; i< calc.size()-1; i++)
				cur+= res[calc[i]][calc[i+1]];
			R= min(R, cur);
		}while(next_permutation(calc.begin(), calc.end()));*/
		int R= srch(0, 1); // dp:bitmask를 이용해서 풀었으나 틀리다고 나옴. 
		if(!R) R= -1;		// 나중에, 반례 찾아서 더 손볼것 
		printf("%d\n", R);
	}
}*/
