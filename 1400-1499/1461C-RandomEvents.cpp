#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
        long idx(n);
        for(long p = n; p > 0; p--){
            if(a[p] == p){idx = p - 1;}
            else{break;}
        }

        long double prod(1.0);
        for(long p = 0; p < m; p++){
            long r; long double prob; scanf("%ld %Lf", &r, &prob);
            if(r >= idx){prod *= (1.0 - prob);}
        }

        long double ans = 1.0 - (idx > 0) * prod;
        printf("%.8Lf\n", ans);
    }

}
