/*#include <iostream>
#include <string>

using namespace std;

string dp[251];

void n2Tile_2()
{
	int N, i, j;
	dp[0] = "1"; dp[1] = "1"; dp[2] = "3";
	for(i= 3; i<= 250; i++) {
		int m1A[200]= {0, }, m2A[200]= {0, }, resA[200]= {0, };
		int m1L= dp[i-1].length(), m2L= dp[i-2].length(), resL= m1L > m2L ? m1L : m2L;
		
		for(j= 0; j< m1L; j++)	m1A[j] = dp[i-1][m1L-1-j]- '0';
		for(j= 0; j< m2L; j++)	m2A[j] = dp[i-2][m2L-1-j]- '0';
		
		for(j= 0; j< resL; j++) {
			int T = m1A[j] + 2*m2A[j] + resA[j];
			resA[j] = T% 10; resA[j+1] = T/ 10;
		}
		if(resA[j] != 0) resL++;
		
		for(j= resL-1; j>= 0; j--){
			dp[i] += (resA[j]+ '0');
		}
	}
	
	while(1){
		cin >> N;
		if(cin.fail()) break;
		cout << dp[N] << endl;
	}
}*/
