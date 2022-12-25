#include <cstdio>
#include <vector>
#include <algorithm>

int main() {

    const long M = 1002;
	long n; scanf("%ld", &n);
    std::vector<long> s(n + 1);
    std::vector<long> b(M + 1, 10000);

	for(long p = 1; p <= n; p++) {
		long a; scanf("%ld", &a);
		s[p] = s[p - 1] + a;
		for(long q = 1; q < p && q <= M; q++){
            long diff = s[p] - s[p - q]; diff = (diff < 0) ? (-diff) : diff;
            b[q] = b[q] < diff ? b[q] : diff;
        }
	}

    long r(2e9);
	for(long p = 1; p <= M; p++){long cand = p * p + b[p] * b[p]; r = (cand < r) ? cand : r;}

	printf("%ld\n",r);
	return 0;
}
