#include <cstdio>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long ans(n + 7);
        long x; scanf("%ld", &x);
        long pos(-1);

        for(long p = 1; p < n; p++){
            long a; scanf("%ld", &a);
            if(a != x){
                ans = std::min(ans, p - 1 - pos);
                pos = p;
            }
        }
        ans = std::min(ans, n - 1 - pos);
        if(ans >= n){puts("-1");}
        else{printf("%ld\n", ans);}
    }

}
