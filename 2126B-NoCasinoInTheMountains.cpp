#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        bool b(0); long z(0), cnt(0);
        for(long p = 0; p < n; p++){
            int a; scanf("%d", &a);
            if(a || b){b = z = 0; continue;}
            ++z;
            if(z >= k){++cnt; z = 0; b = 1;}
        }

        printf("%ld\n", cnt);
    }

}
