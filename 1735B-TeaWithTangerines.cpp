#include <cstdio>

int main() {

	long t;
	scanf("%ld", &t);
	while (t--) {
		long n; scanf("%ld", &n);
		long x; scanf("%ld", &x);
		long y = 2 * x - 1;
		long long res(0);
		for(long p = 1; p < n; p++){
			long a; scanf("%ld", &a);
			res += ((a + y - 1)/ y) - 1;
		}

		printf("%lld\n", res);
	}
}
