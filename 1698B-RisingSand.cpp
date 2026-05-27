#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}

        if(k <= 1){printf("%ld\n", (n - 1) / 2); continue;}

        long cnt(0);
        for(long p = 1; p + 1 < n; p++){cnt += (v[p] > v[p - 1] + v[p + 1]);}
        printf("%ld\n", cnt);
    }

}
