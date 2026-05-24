#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    std::vector<long> w(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%ld", &w[p]);}
    std::vector<long> s(n + 1, 0); 

    long total(0), ms(0);
    for(long p = 1; p <= n; p++){
        s[p] = s[p - 1];
        if(w[p]){total += a[p];}
        else{s[p] += a[p];}
        long cand = s[p] - (p >= k ? s[p - k] : 0);
        ms = (ms > cand) ? ms : cand;
    }

    total += ms;
    printf("%ld\n", total);

    return 0;
}
