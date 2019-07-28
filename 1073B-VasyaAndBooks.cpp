#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0), b(n + 1, 0);
    for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    for(long p = 1; p <= n; p++){scanf("%ld", &b[p]);}
    std::vector<bool> d(n + 1, 1);

    long ind(1);
    for(long p = 1; p <= n; p++){
        long cnt(0);
        while(d[b[p]]){d[a[ind++]] = 0; ++cnt;}
        printf("%ld ", cnt);
    }

    puts("");

    return 0;
}
