#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long mn(2e9), mx(-mn), diff(0);
        for(long p = 0; p < n; p++){
            if(p > 0 && a[p] < 0 && a[p - 1] >= 0){
                mn = (mn < a[p - 1]) ? mn : a[p - 1];
                mx = (mx > a[p - 1]) ? mx : a[p - 1];
            }
            if(p + 1 < n && a[p] < 0 && a[p + 1] >= 0){
                mn = (mn < a[p + 1]) ? mn : a[p + 1];
                mx = (mx > a[p + 1]) ? mx : a[p + 1];
            }
            if(p > 0 && a[p] >= 0 && a[p - 1] >= 0){
                long cur = a[p] - a[p - 1];
                if(cur < 0){cur = -cur;}
                diff = (cur > diff) ? cur : diff;
            }
        }

        long pick = (mn + mx) / 2;
        long tmp = (mx - pick);
        diff = (diff > tmp) ? diff : tmp;
        printf("%ld %ld\n", diff, pick);
    }

    return 0;
}
