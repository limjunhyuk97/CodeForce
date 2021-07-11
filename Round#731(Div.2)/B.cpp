#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int T;
string str;
int alphabetic[30];
int alphabetCount[30];
int minIdx, maxIdx;

bool noflag;

int main(void) {

	cin >> T;
	
	while (T--) {

		cin >> str; while (getchar() != '\n') {}

		for (int i = 0; i < 30; ++i) {
			alphabetic[i] = 0; alphabetCount[i] = 0;
		}

		noflag = false;
		for (int i = 0; i < str.size(); ++i) {
			if (alphabetCount[str[i] - 97] != 0) {
				cout << "NO\n";
				noflag = true;
				break;
			}
			alphabetCount[str[i] - 97]++;
			alphabetic[str[i] - 97] = i;
		}

		if (noflag) continue;

		minIdx = 40; maxIdx = -2;
		for (int i = 0; i < str.size(); ++i) {
			if (alphabetCount[i] !=0) {
				if (i == 0) {
					minIdx = min(minIdx, alphabetic[i]);
					maxIdx = max(maxIdx, alphabetic[i]);
				}
				else {
					if (abs(alphabetic[i] - minIdx) == 1 || abs(alphabetic[i] - maxIdx) == 1) {
						minIdx = min(minIdx, alphabetic[i]);
						maxIdx = max(maxIdx, alphabetic[i]);
					}
					else {
						cout << "NO\n";
						noflag = true;
						break;
					}
				}
			}
			else {
				cout << "NO\n";
				noflag = true;
				break;
			}
		}

		if (!noflag) {
			cout << "YES\n";
			continue;
		}
		else
			continue;
	}


	return 0;
}
