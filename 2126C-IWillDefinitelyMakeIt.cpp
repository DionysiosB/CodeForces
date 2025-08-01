#include <cstdio>
#include <vector>
#include <algorithm>

int main() {

    long t; scanf("%ld", &t);
    while(t--) {
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> h(n); for(long p = 0; p < n; p++){scanf("%ld", &h[p]);}
        long sh(h[k - 1]);
        sort(h.begin(), h.end());
        bool possible(true);
        for(long p = 1; possible && p < n; p++) {
            if(sh > h[p]){continue;}
            if(h[p] > h[p - 1] + sh){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
