/*#include <iostream>
#include <string>
#define MAX 100005
using namespace std;

int parent[MAX], weight[MAX], Wrank[MAX];

int Find(int x)
{
	if(parent[x]== x) return x;
	int px= parent[x];
	parent[x]= Find(px);
	weight[x]+= weight[px];
	return parent[x];
}

void Union(int x, int y, int w)
{
	int px= Find(x), py= Find(y);	
	if(px== py) return ;
	int diff= weight[y]- weight[x];
	if(Wrank[px] > Wrank[py]) {
		int t= px; px= py; py= t;
		w*= -1; diff*= -1;
	}
	weight[px]= w+ diff;
	parent[px]= py;
	if(Wrank[px]== Wrank[py]) Wrank[py]++;
}

void init()
{
	for(int i= 0; i< MAX; i++) {
		parent[i]= i;
		weight[i]= 0;
		Wrank[i]= 0;
	}
}

void weightWeight()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int TC, N, M;
	int a, b, w;
	string ans= "";
	
	cin >> TC;
	for(int test= 0; test< TC; test++) {
		cin >> N >> M;
		init();
		cout << "#" << test+1 << " ";
		char sig;
		while(M--) {
			cin >> sig;
			if(sig== '!') {
				cin >> a >> b >> w;
				Union(a, b, w);
			}
			else {
				cin >> a >> b;
				if(Find(a) == Find(b)) cout << weight[a] - weight[b] << " ";
				else cout << "UNKNOWN";
			}
		}
		cout << endl;
	}
}*/
