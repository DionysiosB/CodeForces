#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long s(0), cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x >= k){s += x;}
            else if(!x && s){--s; ++cnt;}
        }

        printf("%ld\n", cnt);
    }
}
