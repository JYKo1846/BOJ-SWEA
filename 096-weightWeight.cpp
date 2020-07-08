/*#include<iostream>
#include<string>
using namespace std;

int parent[100001];
int weight[100001];

int Find(int x, long long *w)
{
	if(parent[x] == x) return x;
	else {
		*w += weight[x];
		return Find(parent[x], w);
	}
}

void Union(int x, int y, int w)
{
	int a= Find(x, 0);
	int b= Find(y, 0);
	if(a== b) return ;
	weight[a] = w;
	parent[x] = y;
}

void func(int T, int N, int M)
{
	string res= "#";
	res += T+ '0';
	char sig;
	int a, b, w;
	for(int i= 1; i<= M; i++) {
		cin >> sig;
		if(sig== '!') {
			cin >> a >> b >> w;
			Union(a, b, w);
		}
		else if(sig== '?') {
			long long light = 0, heavy= 0;
			res += " "; 
			cin >> a >> b;
			if(Find(a, &light) != Find(b, &heavy)) res += "UNKNOWN";
			else res += to_string(light-heavy);
		}
	}
	cout << res << endl;
}

int main(int argc, char** argv)
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test_case;
	int T, N, M, j;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> M;
		for(j= 1; j<= N; j++) parent[j] = j;
		func(test_case, N, M);
	}
	return 0;
}*/
