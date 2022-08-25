#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(k % 4 == 0){puts("NO"); continue;;}
        puts("YES");
        for(long p = 1; p <= n; p += 2){
            long a(p), b(p + 1);
            long tst = ((p + k) * (p + 1)) % 4;
            if(tst){printf("%ld %ld\n", b, a);}
            else{printf("%ld %ld\n", a, b);}
        }

    }

}
