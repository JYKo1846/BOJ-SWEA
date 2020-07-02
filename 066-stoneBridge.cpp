/*#include <string>
#include <iostream>

using namespace std;

void stoneBridge()
{
	string in;
	string bridge[2];
	int bef[2][100], aft[2][100], i, j, k, len;
	for(i= 0 ;i< 2; i++)	for(j=0 ;j< 100; j++) bef[i][j] = 0;
	cin >> in; cin >> bridge[0] >> bridge[1];
	len = bridge[0].length();
	for(i= 0; i < bridge[0].length(); i++) {
		if(in[0] == bridge[0][i]) bef[0][i] = 1;
		else bef[0][i] = 0;
		if(in[0] == bridge[1][i]) bef[1][i] = 1;
		else bef[1][i] = 0;
		aft[0][i] = 0; aft[1][i] = 0;
	}
	
	for(i= 1 ; i< in.length(); i++) {
		for(j= 0; j< len; j++) {
			if(in[i] == bridge[0][j])
				for(k= 0; k< j; k++) aft[0][j] += bef[1][k];
			if(in[i] == bridge[1][j])
				for(k= 0; k< j; k++) aft[1][j] += bef[0][k];
		}
		for(j= 0; j< len; j++) {
			bef[0][j] = aft[0][j]; aft[0][j] = 0;
			bef[1][j] = aft[1][j]; aft[1][j] = 0;
		}
	}
	
	int res = 0;
	for(i= 0; i< len; i++) res += bef[0][i] + bef[1][i];
	cout << res << endl;
}*/
