#include<cstdio>
#include<vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    while(m--){
        long l, r, x; scanf("%ld %ld %ld", &l, &r, &x);
        --l; --r; --x;
        long count(0);
        for(long p = l; p <= r; p++){count += (a[p] < a[x]);}
        puts((count == x - l) ? "Yes" : "No");
    }

    return 0;
}
