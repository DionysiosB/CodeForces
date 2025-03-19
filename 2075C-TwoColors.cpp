#include<cstdio>
#include<vector>
#include<algorithm>


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a(m); for(long p = 0; p < m; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());

        long idx(0); long long total(0);
        for(long p = m - 1; p >= 0; p--){
            while(idx < p && a[idx + 1] + a[p] < n){++idx;}
            if(idx >= p){break;}
            total += (p - idx);
        }

        printf("%lld\n", total);
    }

}
