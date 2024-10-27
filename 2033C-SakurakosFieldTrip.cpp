#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        for(long p = 1; p < n - 1 - p; p++){
            if(v[p] == v[p - 1] || v[n - 1 - p] == v[n - p]){long x = v[p]; v[p] = v[n - 1 - p]; v[n - 1 - p] = x;}
        }


        long cnt(0);
        for(long p = 1; p < n; p++){cnt += (v[p] == v[p - 1]);}
        printf("%ld\n", cnt);
    }

}
