#include <cstdio>
#include <vector>

int main(){

    std::vector<long> a(6); a[0] = 4; a[1] = 8; a[2] = 15; a[3] = 16; a[4] = 23; a[5] = 42;

    long n; scanf("%ld", &n);
    std::vector<long> s(7); s[0] = n;
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        for(long u = 0; u < 6; u++){if(x == a[u] && s[u] > 0){--s[u]; ++s[u + 1]; break;}}
    }

    printf("%ld\n", n - 6 * s.back());

    return 0;
}
