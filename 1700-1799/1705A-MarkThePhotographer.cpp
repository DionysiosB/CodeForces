#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        std::vector<long> h(2 * n); for(long p = 0; p < 2 * n; p++){scanf("%ld", &h[p]);}
        sort(h.begin(), h.end());
        bool possible(true);
        for(long p = 0; possible && p < n; p++){
            if(h[p + n] < h[p] + x){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
