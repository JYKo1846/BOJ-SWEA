/*const int N = 100010 * 12;
const int M = 27;

int trie[N+1][M+1];
int cnt[N+1];
int trie_cnt= 1;

void init(void) {
    for(int i= 0; i< trie_cnt; i++){
        cnt[i] = 0;
        for(int j= 0; j< M; j++) trie[i][j] = 0;
    }
}

void insert(int buffer_size, char *buf) {
    int idx= 0;
    for(int i= 0; i< buffer_size; i++){
        int cur = buf[i]-'a';
        if(!trie[idx][cur]) trie[idx][cur] = trie_cnt++;
        idx = trie[idx][cur];
        cnt[idx]++;
    }
}

int query(int buffer_size, char *buf) {
    int idx= 0;
    for(int i= 0; i< buffer_size; i++) {
        int cur= buf[i]-'a';
        idx = trie[idx][cur];
    }
    return cnt[idx];
}

#include <stdio.h>
#include <iostream>
using namespace std;

extern void init(void);

extern void insert(int buffer_size, char *buf);

extern int query(int buffer_size, char *buf);

void HsDict() {
	//freopen("input.txt", "r", stdin);
	int TestCase; 
	for (scanf("%d", &TestCase); TestCase--;) {
		int Query_N;
		scanf("%d", &Query_N);
		
		init();
		
		static int tc = 0;
		printf("#%d", ++tc);
		
		for (int i = 1; i <= Query_N; i++) {
			int type; scanf("%d", &type);

			if (type == 1) {
				char buf[15] = { 0, };
				scanf("%s", buf);
				
				int buffer_size = 0;
				while (buf[buffer_size]) buffer_size++;
				
				insert(buffer_size, buf);
			}
			else {
				char buf[15] = { 0, };
				scanf("%s", buf);
				
				int buffer_size = 0;
				while (buf[buffer_size]) buffer_size++;

				printf(" %d", query(buffer_size, buf));
			}
		}
		printf("\n");
		fflush(stdout);
	}
}*/
