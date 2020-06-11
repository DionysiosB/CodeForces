#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> bpos(n + 1); for(long p = 1; p <= n; p++){long x; scanf("%ld", &x); bpos[x] = p;}
    std::vector<long> apos(n + 1); for(long p = 1; p <= n; p++){long x; scanf("%ld", &x); apos[x] = p;}
    std::vector<long> cnt(n, 0); long mx(0);
    for(long p = 1; p <= n; p++){
        long diff = apos[p] - bpos[p];
        if(diff < 0){diff += n;}
        ++cnt[diff];
        mx = (mx > cnt[diff]) ? mx : cnt[diff];
    }

    printf("%ld\n", mx);

    return 0;
}
