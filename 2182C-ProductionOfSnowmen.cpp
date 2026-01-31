#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long &x : a){scanf("%ld", &x);}
        std::vector<long> b(n); for(long &x : b){scanf("%ld", &x);}
        std::vector<long> c(n); for(long &x : c){scanf("%ld", &x);}

        long long cnt(0);
        for(long bs = 0; bs < n; bs++){
            bool valid(true);
            for(long p = 0; valid && p < n; p++){
                if(a[p] >= b[(bs + p) % n]){valid = false;}
            }
            cnt += n * valid;
        }

        long prev(cnt); cnt = 0;
        for(long cs = 0; cs < n; cs++){
            bool valid(true);
            for(long p = 0; valid && p < n; p++){
                if(b[p] >= c[(cs + p) % n]){valid = false;}
            }
            cnt += prev * valid;
        }

        printf("%lld\n", cnt);
    }

}
