#include <cstdio>
#include <vector>

int main() {

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
	for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    long cnt(1), mx(1);
	for(long p = 1; p < n; p++) {
		cnt = (a[p - 1] * 2 >= a[p]) ? (cnt + 1) : 1;
        mx = (mx > cnt) ? mx : cnt;
	}

    printf("%ld\n", mx);

	return 0;
}
