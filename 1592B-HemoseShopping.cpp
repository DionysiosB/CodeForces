#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        std::vector<long> a(n), b(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]); b[p] = a[p];}
        if(2 * x <= n){puts("YES"); continue;}
        sort(b.begin(), b.end());
        bool possible(true);
        for(long p = n - x; possible && p < x; p++){if(a[p] != b[p]){possible = false;}}
        puts(possible ? "YES" : "NO");
    }

}
