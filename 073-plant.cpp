/*#include <iostream>
#include <string>
#include <algorithm>
#define MAX 802

using namespace std;

int in[16][16];
int cost[1<<16];
int N, A;

int dp(int num, int stat)
{
	if(num>= A) return 0;
	if(num== 0) return -1;
	if(cost[stat] != -1) return cost[stat];
	else {
		cost[stat]= MAX;
		for(int i= 0; i< N; i++)
			if((1<< i) & stat)
				for(int j= 0; j< N; j++) 
					if(!(stat & (1<< j))&&(i!= j))
						cost[stat] = min(cost[stat], dp(num+1, stat | (1<< j))+ in[i][j]);
	}
	return cost[stat];
}


void plant()
{
	string str;
	int i, j, cnt= 0, start= 0;
	for(i= 0; i< 1<< 16; i++) cost[i] = -1;
	
	cin >> N;
	for(i= 0; i< N; i++) for(j= 0; j< N; j++) cin >> in[i][j];
	cin >> str >> A;
	for(i= 0; i< N; i++) {
		if(str[i] == 'Y') {
			start |= 1<< i;
			cnt++; 
		}
	}
	cout << dp(cnt, start) << endl;
	for(i= 0 ; i< 1<< N; i++) cout << cost[i] << " ";
}*/		
