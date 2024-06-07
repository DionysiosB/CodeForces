#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        long idx(0);
        for(long p = 1; p < n; p++){
            if(v[p - 1] > v[p]){idx = p;}
        }

        long prev = v[idx]; bool ans(true);
        for(long p = 1; ans && p < n; p++){
            long q = (p + idx) % n;
            if(prev > v[q]){ans = false;}
            prev = v[q];
        }

        puts(ans ? "Yes" : "No");
    }

}
