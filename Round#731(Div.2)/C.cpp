#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T;
int k, n, m;
int arrA[103];
int arrB[103];
int maxLine, zeroCnt;
int aCnt = 0, bCnt = 0;
bool noflag;

int main(void) {

	cin >> T;

	for (int i = 0; i < T; ++i) {
		cin >> k >> n >> m;

		zeroCnt = 0;
		maxLine = -1;
		for (int i = 0; i < n; ++i) {
			cin >> arrA[i];
			if (arrA[i] == 0) zeroCnt++;
			maxLine = (maxLine > arrA[i] ? maxLine : arrA[i]);
		}

		for (int i = 0; i < m; ++i) {
			cin >> arrB[i];
			if (arrB[i] == 0) zeroCnt++;
			maxLine = (maxLine > arrB[i] ? maxLine : arrB[i]);
		}

		if (maxLine - k > zeroCnt) {
			cout << -1 << "\n";
			continue;
		}

		vector<int> command;
		aCnt = 0; bCnt = 0; noflag = false;
		for (int i = 0; i < n + m; ++i) {
			if (bCnt <m && arrB[bCnt] <= k) {
				if (arrB[bCnt] == 0)
					++k;
				command.push_back(arrB[bCnt++]);
				continue;
			}
			if (aCnt < n && arrA[aCnt] <= k) {
				if (arrA[aCnt] == 0)
					++k;
				command.push_back(arrA[aCnt++]);
				continue;
			}
			noflag = true;
			break;
		}

		if(noflag) {
			cout << -1 << "\n";
			continue;
		}

		for (int i = 0; i < n + m; ++i) {
			cout << command[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}
