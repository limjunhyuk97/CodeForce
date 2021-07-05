#include <iostream>
using namespace std;

int T, N, tmp;
int odd, even;

int main(void) {

	cin >> T;

	for (int i = 0; i < T; ++i) {
		cin >> N; odd = 0; even = 0;
		for (int j = 0; j <2 * N; ++j) {
			cin >> tmp;
			if (tmp % 2 == 0) even++;
			else odd++;
		}
		if (even == odd) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}

	return 0;
}
