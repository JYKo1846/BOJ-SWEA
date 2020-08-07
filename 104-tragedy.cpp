
// LIS의 두가지 알고리즘
// 이분탐색 lower_bound()를 이용한 알고리즘  
// O( NlogN )
/*#include <iostream>
#include <vector>
using namespace std;

int in;

void tragedy()
{
	int N, i;
	vector<int> v;
	cin >> N;
	v.push_back(-100);
	for(i= 0; i< N; i++) {
		cin >> in;
		if(v.back()< in)
			v.push_back(in);
		else {
			auto it= lower_bound(v.begin(), v.end(), in);
			*it= in;
		}
	}
	printf("%d\n", v.size()-1);
}*/


// O( N^2 )
// 완전탐색을 이용한 알고리즘, 10만 이상으로 넘어갈 경우, 사용이 불가능. 
/*
#include <stdio.h>
int Max(int a, int b) { return a > b ? a : b; }
int in[1001], dp[1001];
void tragedy()
{
	int N, i, res= 1;
	scanf("%d", &N);
	for(i= 0; i< N; i++) scanf("%d", &in[i]);	dp[0]= 1;
	for(i= 1; i< N; i++) {
		for(int j= 0; j< i; j++) if(in[i]> in[j]) dp[i]= Max(dp[i], dp[j]+1);
		if(!dp[i]) dp[i]= 1;
		res= Max(res, dp[i]);
	}
	printf("%d\n", res);
}*/
