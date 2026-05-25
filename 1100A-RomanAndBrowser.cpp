#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long mx(0);
    for(long b = 0; b < k; b++){
        long cur(0);
        for(long p = 0; p < n; p++){
            if((p % k) == b){continue;}
            cur += a[p];
        }
        if(cur < 0){cur = -cur;}
        mx = (mx > cur) ? mx : cur;
    }

    printf("%ld\n", mx);

    return 0;
}
