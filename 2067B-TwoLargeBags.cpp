#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n + 1);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++v[x];}
        bool ans(n % 2 == 0);
        for(long p = 1; ans && p <= n; p++){
            if(!v[p]){continue;}
            else if(v[p] == 1){ans = false;}
            else if(p < n){v[p + 1] += v[p] - 2;}
        }
        if(v.back() % 2){ans = false;}
        puts(ans ? "Yes" : "No");

    }
}
