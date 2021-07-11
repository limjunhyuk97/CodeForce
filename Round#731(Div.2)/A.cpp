#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int T;
int xA, yA, xB, yB, xF, yF;

int main(void) {

	cin >> T;

	for (int i = 0; i < T; ++i) {

		cin >> xA >> yA >> xB >> yB >> xF >> yF;

		if (xA == xB || yA == yB) {
			if (yA == yF && min(xA, xB) <= xF && xF <= max(xA, xB)) {
				cout << abs(xA - xB) + abs(yA - yB) + 2 << "\n";
				continue;
			}
			else if (xA == xF && min(yA, yB) <= yF && yF <= max(yA, yB)) {
				cout << abs(xA - xB) + abs(yA - yB) + 2 << "\n";
				continue;
			}
			else
				cout << abs(xA - xB) + abs(yA - yB) << "\n";
		}
		else
			cout << abs(xA - xB) + abs(yA - yB) << "\n";
	}

	return 0;
}
