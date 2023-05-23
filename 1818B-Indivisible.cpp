#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 1){puts("1"); continue;}
        if(n % 2){puts("-1"); continue;}
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){a[p] = p + 1;}
        for(long p = 1; p < n; p += 2){long x = a[p - 1]; a[p - 1] = a[p]; a[p] = x;}
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
