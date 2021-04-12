#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(k > (n - 1) / 2){puts("-1"); continue;}
        std::vector<long> a(n + 1, -1);

        long idx(n);
        for(long p = 2; p <= n && k > 0; p += 2, k--){a[p] = idx--;}
        for(long p = 1; p <= n; p++){if(a[p] < 0){a[p] = idx--;}}
        for(long p = 1; p <= n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
