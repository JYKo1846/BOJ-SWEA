/*#include <stdio.h>

int in[51][101];
int code[5][5][5];

int validation(int *code)
{
	int odd= 0, even= 0, key= code[7], all= 0, i;
	for(i= 0; i< 8; i+= 2) odd += code[i];
	for(i= 1; i< 7; i+= 2) even += code[i];
	if(!((odd*3 + even + key)% 10)) {
		for(i= 0; i< 8; i++) all += code[i];
		return all;
	}
	else return 0;
}
int biToInt(int *bicode)
{
	bool zeroF= false;
	int passcode[8];
	int f1= 0, z= 0, s1= 0, i, j;
	int codeP= 0;
	for(i= 0; i< 101; i++) {
		if(codeP== 8) break;
		for(j= i; j<= i+7; j++) {
			if(bicode[j]) {
				if(zeroF) {
					s1++;
					if(bicode[j+1] == 0) zeroF= false;
				}
				else {
					f1++;
					if(bicode[j+1] == 0) zeroF= true;
				}
			}
			else {
				if(zeroF) z++;
				else {
					if(bicode[j+1]== 1) {
						zeroF= false;
						break;
					}
				}
			}
		}
		i= j;
		passcode[codeP++]= code[f1][z][s1];
		f1= 0, z= 0, s1= 0;
	}
	printf("PASSCODE : ");
	for(i= 0; i< 8; i++) printf("%d", passcode[i]);
	return validation(passcode);
}

int convert(int N, int M)
{
	int bicode[101];
	int i, j;
	for(i= 1; i<= N; i++) {
		for(j= 1; j<= M; j++) {
			if(in[i][j]) {
				break;
			}
		}
		if(j != M+1) break;
	}
	int p = 0;
	for(int k= j; k<= j+56; k++)
		bicode[p++] = in[i][k];
	return biToInt(bicode);
}

void init(int N, int M)
{
	int i, j;
	for(i= 0; i<= N; i++)
		for(j= 0; j<= M; j++)
			in[i][j]= -1;
}

void binarypass()
{
	code[2][1][1] = 0;
	code[2][2][1] = 1;
	code[1][2][2] = 2;
	code[4][1][1] = 3;
	code[1][3][2] = 4;
	code[2][3][1] = 5;
	code[1][1][4] = 6;
	code[3][1][2] = 7;
	code[2][1][3] = 8;
	code[1][1][2] = 9;

	int T, N, M;
	scanf("%d", &T);
	for(int i= 1; i<= T; i++) {
		scanf("%d %d", &N, &M);
		init(N, M);
		for(int j= 1; j<= N; j++)
			for(int k= 1; k<= M; k++) scanf("%1d", &in[j][k]);
		printf("#%d %d\n", i, convert(N, M));
	}
}*/
