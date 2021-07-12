#include <stdio.h>

typedef long long int ll;

int main() {

	int test;
	ll n, bef, aft, ans, k;
	
	scanf_s("%d", &test);

	while (test--) {

		scanf_s("%lld", &n);
		scanf_s("%lld", &bef);
		
		printf("0 ");
		for (int i = 1; i < n; ++i) {
			
			// ans 0으로 갱신
			ans = 0;
			scanf_s("%lld", &aft);
			
			// bef가 0이 될때까지 (2진수를)오른쪽으로 하나씩 shift 한다
			for (int j = 0; (bef >> j) > 0; ++j) {
				
				// 만약에 bef의 'j번째 자리수'가 1이라면
				if ((bef >> j) % 2) {
					
					// 만약에 aft의 'j번째 자리수'가 0이라면
					// 즉, aft의 j번째 자리수를 1로 바꿔줄 필요가 있다면 1을 해당 자리에 넣어준 것을 더해준다
					if (!((aft >> j) % 2)) ans += (1 << j);
				}

			}

			// 새롭게 바뀐 bef는 aft와 ans의 합으로 새롭게 갱신된다
			bef = aft + ans;
			printf("%lld ", ans);
		}
		printf("\n");

	}

	return 0;
}
