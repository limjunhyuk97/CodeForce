// 공약수가 두 수의 차보다 클 수가 없다.
// min max : algorithm 헤더에 존재
// max_element 함수 : max_element(v.begin(), v.end())

#include <iostream>
#include <utility>
#define MAX(a, b) a > b ? a : b
#define MIN(a, b) a > b ? b : a
using namespace std;

typedef long long int ll;
ll a, b, GAP, GCD, maxnum, minnum;
int t;

ll gcd(ll A, ll B) {
	return B ? gcd(B, A % B) : A;
}

int main(void) {

	cin >> t;

	for (int i = 0; i < t; ++i) {

		cin >> a >> b;
		maxnum = MAX(a, b);
		minnum = MIN(a, b);
		GAP = maxnum - minnum;
		GCD = gcd(maxnum, minnum);

		if (GAP == 0) {
			cout << 0 << " " << 0 << "\n"; continue;
		}
		else {
			if (GAP == GCD) {
				cout << GAP << " " << 0 << "\n";
				continue;
			}
			// MAX GAP 배수 만드는게 빠르냐, MIN GAP 배수 만드는게 빠르냐..
			else {
				
				cout << GAP << " " << (GAP - maxnum % GAP > minnum % GAP ? minnum % GAP : GAP - maxnum % GAP) << "\n";

			}
		}
		
	}

	return 0;
}
