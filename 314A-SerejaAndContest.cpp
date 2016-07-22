#include <cstdio>

int main(){

    long long n, k; scanf("%lld %lld", &n, &k);
    long long total(0), count(0);
    for(long long p = 1; p <= n; p++){
        long long x; scanf("%lld", &x);
        if(p > 1 && total - x * (n - p) * (p - count - 1) < k){printf("%lld\n", p); ++count;} 
        else{total += x * (p - 1 - count);}
    }

    return 0;
}
