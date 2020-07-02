/*#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string arr1, arr2, arr3;
int dp[101][101][101];

void lcs3()
{
	int i, j, k;
	cin >> arr1 >> arr2 >> arr3;
	arr1 = '0'+ arr1; arr2 = '0'+ arr2; arr3 = '0'+ arr3;
	
	for(i= 1; i<= arr1.size()-1; i++) {
		for(j= 1; j<= arr2.size()-1; j++) {
			for(k= 1; k<= arr3.size()-1; k++) {
				if(arr1[i] == arr2[j] && arr2[j] == arr3[k]) dp[i][j][k] = dp[i-1][j-1][k-1] +1;
				else dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
			}
		}
	}
	cout << dp[i-1][j-1][k-1]  << endl;
}*/
