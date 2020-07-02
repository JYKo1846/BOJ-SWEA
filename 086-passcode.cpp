/*#include <iostream>
#include <string>

using namespace std;

char in[2000][501];
bool use[2000][501];
int codeInt[5][5][5];

int validate(string deciArr)
{
	int i, odd= 0, even= 0, all= 0, T;
	for(i= 0; i< 8; i+= 2) {
		T = deciArr[i]- '0';
		odd += T;	all += T;
	}
	for(i= 1; i< 7; i+= 2) {
		T = deciArr[i]- '0';
		even += T;	all += T;
	}
	int key = odd*3 + even + (deciArr[i]- '0');
	if(key%10 == 0) return all+ (deciArr[i]- '0');
	else return -1;
}

char biToCodeInt(int *cnt01)
{
	int i, j;
	for(i= 0; i< 10; i++) {
		for(j= 0; j< 3; j++) {
			char cntChar = cnt01[j] + '0';
			if(cntChar!= codeInt[i][j]) break;
		}
		if(j== 3) return i+ '0';
	}
	return '-1';
}

string biToDeci(string biTemp, int rate)
{
	bool flag1= false, startF= false;
	string res;
	int cnt01[3]= {0, }, i, j;
	for(i= 0; res.length()!= 8; i= j+1) {
		for(j= i; biTemp[j]!= '\0'; j++) {
			if(biTemp[j]== '0') {
				if(!flag1) {
					startF= true;
					continue;
				}
				else cnt01[1]++;
			}
			if(biTemp[j]== '1') {
				if(!flag1&& startF)	{
					cnt01[0]++;
					if(biTemp[j+1]== '0') flag1= true;
				}
				else {
					cnt01[2]++;
					if(biTemp[j+1]== '0') break;
				}
			}
		}
		for(int k= 0; k< 3; k++) cnt01[k] /= rate;
		res += biToCodeInt(cnt01);
		for(int k= 0; k< 3; k++) cnt01[k] = 0;
		flag1= 0; startF= 0;
	}
	return res;
}

string hexToBi(char hexcode)
{
	if(hexcode == '0') return "0000";
	if(hexcode == '1') return "0001";
	if(hexcode == '2') return "0010";
	if(hexcode == '3') return "0011";
	if(hexcode == '4') return "0100";
	if(hexcode == '5') return "0101";
	if(hexcode == '6') return "0110";
	if(hexcode == '7') return "0111";
	if(hexcode == '8') return "1000";
	if(hexcode == '9') return "1001";
	if(hexcode == 'A') return "1010";	// 10
	if(hexcode == 'B') return "1011";	// 11
	if(hexcode == 'C') return "1100";	// 12
	if(hexcode == 'D') return "1101";	// 13
	if(hexcode == 'E') return "1110";	// 14
	if(hexcode == 'F') return "1111";	// 15
}

int transcode(char *hexcode) 
{
	string biTemp, toPass, deci;	// biTemp : 16진수->2진수 변환 위한 배열 , toPass: 2진수->10진수 변환위한 배열 
	int cnt01[3]= {0, };			// deci : 변환한 10진수들 저장을 위한 배열 
	bool flag1= false, startF= false;
	int i, j, rate;
	
	for(i= 0; hexcode[i]!= '\0'; i++)	biTemp += hexToBi(hexcode[i]);
	//cout << biTemp << endl;
	for(i= 0; biTemp[i]!= '\0'; i++) {
		if(biTemp[i]== '0') {
			if(!flag1) {
				startF= true;
				continue;
			}
			else cnt01[1]++;
		}
		if(biTemp[i]== '1') {
			if(!flag1&& startF)	{
				cnt01[0]++;
				if(biTemp[i+1]== '0') flag1= true;
			}
			else {
				cnt01[2]++;
				if(biTemp[i+1]== '0') break;
			}
		}
	}
	//cout << "COUNT01 : " << cnt01[0] << " " << cnt01[1] << " " << cnt01[2] << endl;
	for(i= 0; i< 3; i++) toPass += (cnt01[i]+ '0');
	//cout << "toPasscode : " << toPass << endl;
	//cout << "BEFORE DECIMAL : "<< deci << endl;
	for(i= 36; i> 0; i--) {
		if(cnt01[0]% i== 0 &&
			cnt01[1]% i== 0 &&
			cnt01[2]% i== 0 ) {
				rate = i;
				break;
			}
	}
	//cout << "RATE : " << rate << endl;
	deci+= biToDeci(biTemp, rate);
	//cout << "AFTER DECIMAL : "<< deci << endl;
	return validate(deci);
}

int search(int N, int M, int TC)
{
	char hexTemp[501];
	int i, j;
	for(i= 0; i< N; i++) {
		for(j= 0; j< M; j++) {
			if(in[i][j]!= '0' && !use[i][j]) {
				int k, cnt= 0;
				for(k= j; in[i][k]!= '0'; k++)	hexTemp[k-j]= in[i][k];
				hexTemp[k-j]= '\0';
				for(k= i; in[k][j]!= '0'; k++)
					for(int l= j; in[k][l]!= '0'; l++) use[k][l] = 1;
				int resT= transcode(hexTemp);
				if(resT != -1) cout << "#" << TC << " " << resT << endl;
				return TC+1;
			}
		}
	}
}

void passcode()
{
	int T, N, M;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	codeInt[2][1][1] = 0;
	codeInt[2][2][1] = 1;
	codeInt[1][2][2] = 2;
	codeInt[4][1][1] = 3;
	codeInt[1][3][2] = 4;
	codeInt[2][3][1] = 5;
	codeInt[1][1][4] = 6;
	codeInt[3][1][2] = 7;
	codeInt[2][1][3] = 8;
	codeInt[1][1][2] = 9;
	
	cin >> T;
	int tcp = 1;
	for(int i= 1; i<= T;) {
		int j, k;
		cin >> N >> M;
		for(j= 0; j< N; j++) {
			for(k= 0; k< M; k++) {
				cin >> in[j][k]; use[j][k] = 0;
			}
		}
		tcp = search(N, M, tcp);
	}
}*/
