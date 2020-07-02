/*#include <iostream>
#include <algorithm>
using namespace std;

int in[100000][3], co[100000][3];

int dp(int N)
{
	co[1][0] = co[0][1]+ in[1][0];
	co[1][1] = min(co[1][0], min(co[0][1], co[0][2]))+ in[1][1];
	co[1][2] = min(co[1][1], min(co[0][1], co[0][2]))+ in[1][2];
	for(int i= 2;i < N; i++) {
		co[i][0] = min(co[i-1][0], co[i-1][1]) + in[i][0];
		co[i][1] = min(co[i-1][2], min(co[i][0], min(co[i-1][0], co[i-1][1])))+ in[i][1];
		co[i][2] = min(co[i][1], min(co[i-1][1], co[i-1][2]))+ in[i][2];
	}
	return co[N-1][1];
}


void triGraph()
{
	int N, T= 1;
	while(1){
		cin >> N;
		if(N == 0) return ;
		for(int i= 0; i< N; i++) cin >> in[i][0] >> in[i][1] >> in[i][2];
		co[0][1] = in[0][1]; co[0][2] = in[0][1] + in[0][2];
		cout << T++ << ". " << dp(N)<< endl;
	}
}*/
