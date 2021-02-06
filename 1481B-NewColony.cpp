#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> h(n + 1, 0); for(long p = 0; p < n; p++){scanf("%ld", &h[p]);}
        if(k > 100 * n){puts("-1"); continue;}
        long res(-1);
        while(k--){
            long idx(0); while(idx < n && h[idx] >= h[idx + 1]){++idx;}
            if(idx >= n){res = -1; break;}
            ++h[idx]; res = idx + 1;
        }
        printf("%ld\n", res);
    }

}
