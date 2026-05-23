#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n + 1); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}; a[n] = 1e9 + 7;
    long idx(0);
    for(long p = 0; p < m; p++){
        long b; scanf("%ld", &b);
        while(a[idx] < b){++idx;}
        printf("%ld ", idx);
    }
    puts("");

}
