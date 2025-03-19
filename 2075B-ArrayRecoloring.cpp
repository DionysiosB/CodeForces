#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n);

        long mxmid(-1);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            if(k > 1){continue;}
            if(p > 0 && p + 1 < n){mxmid = (mxmid > a[p] ? mxmid : a[p]);}
        }

        if(k == 1 && n > 2){
            long left = a[0] + mxmid;
            long right = mxmid + a.back();
            long both  = a[0] + a.back();
            long res = (left > right ? left : right);
            res = (res > both ? res : both);
            printf("%ld\n", res);
            continue;
        }

        sort(a.rbegin(), a.rend());
        long long total(0);
        for(long p = 0; p < n && p < k + 1; p++){total += a[p];}
        printf("%lld\n", total);
    }

}
