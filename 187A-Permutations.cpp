#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n), b(n);
    long k(0);

    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
    for(long p = 0; p < n; p++){if(b[p] == a[k]){++k;}}

    printf("%ld\n", n - k);
    return 0;
}
