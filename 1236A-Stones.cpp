#include <cstdio>

long mn(long x, long y){return (x < y) ? x : y;}
 
int main() {

	long t; scanf("%ld", &t);
    while(t--){
	    long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long ans = 3 * (mn(b, c / 2) + mn(a, (b - mn(b, c / 2)) / 2));
        printf("%ld\n", ans);
	}

    return 0;
}
