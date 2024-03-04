#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        std::vector<bool> a(k + 1, 0), b(k + 1, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); if(x <= k){a[x] = 1;}}
        for(long p = 0; p < m; p++){long x; scanf("%ld", &x); if(x <= k){b[x] = 1;}}

        bool possible(true);
        long u(0), v(0), w(0);
        for(long p = 1; possible && p <= k; p++){
            if(a[p] && b[p]){++w;}
            else if(a[p]){++u;}
            else if(b[p]){++v;}
            else{possible = false;}
        }

        possible = possible && (u + w >= k / 2) && (v + w >= k / 2);
        puts(possible ? "YES" : "NO");
    }

}
