#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(2 * n, 0);
        std::vector<bool> used(2 * n + 1, 0);
        bool possible(true);
        for(long p = 0; p < n; p++){
            long b; scanf("%ld", &b);
            a[2 * p] = b;
            if(used[b]){possible = false;}
            used[b] = true;
        }

        for(long p = 0; possible && p < n; p++){
            long x = a[2 * p];
            for(long q = x + 1; q <= 2 * n; q++){if(!used[q]){used[q] = true; a[2 * p + 1] = q; break;}}
            if(!a[2 * p + 1]){possible = false;}
        }

        if(possible){
            for(long p = 0; p < 2 * n; p++){printf("%ld ", a[p]);}
            puts("");
        }
        else{puts("-1");}
    }

    return 0;
}
