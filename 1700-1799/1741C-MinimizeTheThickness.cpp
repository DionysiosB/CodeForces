#include <cstdio>
#include <vector>
#include <set>


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            b[p] = a[p] + ((p > 0) ? b[p - 1] : 0);
        }

        long res(n);
        for(long k = 0; k < n; k++){
            if(b.back() % b[k]){continue;}
            long s(b[k]), t(0), cnt(0), cur(0);
            bool possible(true);
            for(long p = 0; possible && p < n; p++){
                cur += a[p]; ++cnt;
                if(cur == s){
                    t = (t > cnt) ? t : cnt;
                    cur = 0; cnt = 0;
                }
                else if(cur > s){possible = false;}
            }

            if(possible){res = (res < t) ? res : t;}
        }

        printf("%ld\n", res);
    }

}
