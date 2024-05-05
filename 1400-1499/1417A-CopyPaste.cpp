#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n);
        long idx(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            if(a[p] < a[idx]){idx = p;}
        }

        long long cnt(0);
        for(long p = 0; p < n; p++){
            if(p == idx){continue;}
            cnt += (k - a[p]) / a[idx];
        }
        printf("%lld\n", cnt);
    }

    return 0;
}
