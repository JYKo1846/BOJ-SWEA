/*#include <iostream>
#include <map>

using namespace std;

map<long long, long long> m;
long long P, Q;

long long dp(long long N)
{
	if(m[N]) return m[N];
	else return m[N] = dp(N/P) + dp(N/Q);
}

void infiniteNum()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long N;
	cin >> N >> P >> Q;
	m[0] = 1;
	cout << dp(N) << endl;
}*/
