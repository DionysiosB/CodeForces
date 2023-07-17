#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 1){puts("1"); continue;}
        else if(n == 2){puts("2 1"); continue;}

        std::vector<long> a(n, 0);
        a[0] = 2; a[n / 2] = 1; a[n - 1] = 3; long cur(4);
        for(long p = 1; p + 1 < n; p++){
            if(a[p]){continue;}
            a[p] = cur; cur++;
        }
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
