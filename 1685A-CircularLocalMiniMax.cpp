#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        if(n % 2){puts("NO"); continue;}
        sort(a.begin(), a.end());
        std::vector<long> b(n);
        for(long p = 0; p < n; p++){
            long idx = (2 * p + (2 * p >= n)) % n;
            b[idx] = a[p];
        }

        bool possible(true);
        for(long p = 0; possible && p < n; p++){
            long prev = (p - 1 + n) % n;
            long next = (p + 1 + n) % n;
            if(b[prev] <= b[p] && b[p] <= b[next]){possible = false;}
            if(b[prev] >= b[p] && b[p] >= b[next]){possible = false;}
        }

        if(!possible){puts("NO");}
        else{
            puts("YES");
            for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
            puts("");
        }

    }

}
