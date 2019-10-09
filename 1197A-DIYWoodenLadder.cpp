#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long ma(0), mb(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x >= ma){mb = ma; ma = x;}
            else if(x > mb){mb = x;}
        }

        long ans = n - 2;
        ans = (ans < mb - 1) ? ans : (mb - 1);
        printf("%ld\n", ans);
    }

    return 0;
}
