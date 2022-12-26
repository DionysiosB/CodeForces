#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long s, f; scanf("%ld %ld", &s, &f);

    long cs(0); for(long p = s; p < f; p++){cs += a[p];}
    
    long start(n), mx(cs);
    for(long p = 1; p < n; p++){
        cs = cs - a[(s + p - 1) % n] + a[(f - 1 + p) % n];
        printf("%ld (%ld-%ld) -> %ld\n", p, (s + p), (f + p - 1),     cs);
        if(cs > mx){mx = cs; start = (p - s - 1 + n) % n; puts("*");}
    }

    printf("%ld\n", start);

    return 0;
}
