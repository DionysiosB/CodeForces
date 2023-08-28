#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, n; scanf("%ld %ld %ld", &x, &y, &n);
        std::vector<long> a(n); a[0] = x; a[n - 1] = y;
        for(long p = n - 2; p > 0; p--){a[p] = a[p + 1] - (n - 1 - p);}
        if(a[1] < n - 1 + a[0]){puts("-1"); continue;}
        else{
            for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
            puts("");
        }

    }

}
