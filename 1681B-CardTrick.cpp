#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long m; scanf("%ld", &m);
        long idx(0);
        while(m--){long x; scanf("%ld", &x); idx += x; idx %= n;}
        printf("%ld\n", a[idx]);
    }

}
