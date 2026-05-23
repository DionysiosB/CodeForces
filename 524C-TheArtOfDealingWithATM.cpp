#include <cstdio>
#include <set>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::set<long> ds; for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ds.insert(x);}
    
    long q; scanf("%ld", &q);
    while(q--){
        long x; scanf("%ld", &x);
        long mb(k + 1);
        for(std::set<long>::iterator it = ds.begin(); it != ds.end(); it++){
            long den = *it;
            if(x % den == 0 && x / den <= k){mb = (mb < (x / den)) ? mb : (x / den);}

            for(long p = 1; p <= k; p++){
                long rem = x - p * den;
                if(rem <= 0){break;}
                for(long q = 1; q + p <= k && q + p < mb; q++){
                    if(rem % q != 0){continue;}
                    if(ds.count(rem / q)){mb = q + p;}
                }
            }
        }

        printf("%ld\n", (mb <= k) ? mb : -1);
    }

    return 0;
}
