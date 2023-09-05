#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        std::vector<long> a(n); 
        long s(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]); a[p] %= x;
            s += a[p]; s %= x;
        }

        long ans(n);
        if(s % x == 0){
            long left(0); while(left < n && a[left] == 0){++left;}
            long right(0); while(right < n && a[n - 1 - right] == 0){++right;}
            long mn = (left < right) ? left : right;
            ans -= mn + 1;
        }

        printf("%ld\n", ans);
        continue;
    }

    return 0;
}
