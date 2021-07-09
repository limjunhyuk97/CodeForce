#include <iostream>
using namespace std;

typedef long long int ll;
int t;
ll n, sum, tmp, fraction1, fraction2;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	for (int i = 0; i < t; ++i) {
		
		cin >> n;

		sum = 0;
		for (int j = 0; j < n; ++j) {
			cin >> tmp;
			sum += tmp;
		}

		fraction1 = sum % n;
		fraction2 = n - fraction1;

		cout << fraction1 * fraction2 << "\n";

	}

	return 0;
}
