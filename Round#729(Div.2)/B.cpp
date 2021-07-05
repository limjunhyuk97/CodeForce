// a를 곱하는 것과, b를 더하는 것의 순서와 상관없이 결국 결과는 a^n + b*m꼴이 된다는 것을 발견하는 것이 포인트

#include <iostream>
#include <cmath>
using namespace std;

typedef long long int ll;
ll T, n, a, b;

bool Divide(ll N) {
	if (a == 1)
		return (N - 1) % b == 0 ? true : false;
	for (ll i = 1; i <= N; i *= a) {
		if ((N - i) % b == 0)
			return true;
	}
	return false;
}

int main(void) {

	cin >> T;
	for (int i = 0; i < T; ++i) {
		cin >> n >> a >> b;

		if (Divide(n)) cout << "Yes" << "\n";
		else cout << "No" << "\n";

	}
	return 0;
}
