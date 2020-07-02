/*#include<iostream>
#include <string>
using namespace std;

void validity()
{
	int test_case;
	int T;
    string STR;
    
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int fir, sec;
		cin >> STR;
        cout << "#"<< test_case<< " ";
        fir = (STR[0]-'0')*10 + (STR[1]-'0');
        sec = (STR[2]-'0')*10 + (STR[3]-'0');
        if(fir<= 12 && fir> 0) {
            if(sec > 12 || sec == 0) cout << "MMYY";
            else cout << "AMBIGUOUS";
        }
        else {
            if(sec <= 12 && sec > 0) cout <<"YYMM";
            else cout << "NA";
        }
        cout << endl;
	}
}*/
