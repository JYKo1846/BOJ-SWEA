/*#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string>

using namespace std;

int N, ans = 0;
vector<int> dot;
int dp[101] = {0, };



void bwconnect(int begin, int con)
{
	
		 
		
		
	
}

void init_bwc()
{
	char str[105];
	dot.reserve(101);
	scanf("%d", &N);
	scanf("%s", str);
	if(str[0] + str[1] == '0' + '1') printf("%c %c\n", str[0], str[1]);
	
	
	for(int i= N; i>= 2; i--) {
		if(dot[i] != dot[1]){
			dp[1] = i; dp[i] = 1;
			bwconnect(1, i);
		}
		dp[i] = 0;
	}
	//cout << ans;
}*/
