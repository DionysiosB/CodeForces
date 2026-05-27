#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        long long s(0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]); s += a[p];}
        if(s % n){puts("-1"); continue;}
        long num = s / n;
        long k(0); for(long p = 0; p < n; p++){k += (num < a[p]);}
        printf("%ld\n", k);
    }

}
