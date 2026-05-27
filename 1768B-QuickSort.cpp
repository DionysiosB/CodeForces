#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long seek(1), cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == seek){++seek;}
            else{++cnt;}
        }

        printf("%ld\n", (cnt + k - 1) / k);
    }

}
