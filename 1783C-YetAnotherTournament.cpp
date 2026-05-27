#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(a);
        sort(b.begin(), b.end());
        long cnt(0);
        for(long p = 0; p < n; p++){
            if(m >= b[p]){m -= b[p]; ++cnt;}
            else{break;}
        }

        cnt += (0 < cnt && cnt < n && (m + b[cnt - 1] >= a[cnt]));
        printf("%ld\n", n + 1 - cnt);
    }

}
