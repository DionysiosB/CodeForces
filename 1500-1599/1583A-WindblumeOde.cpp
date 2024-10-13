#include <cstdio>
#include <vector>

bool isPrime(long u){
    if(u <= 1){return false;}
    for(long p = 2; p * p <= u; p++){if(u % p == 0){return false;}}
    return true;
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); long sum(0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]); sum += a[p];}

        long idx(-1); bool check = isPrime(sum);
        if(check){for(long p = 0; p < n; p++){if(!isPrime(sum - a[p])){idx = p; break;}}}

        printf("%ld\n", n - check);
        for(long p = 0; p < n; p++){
            if(p == idx){continue;}
            printf("%ld ", p + 1);
        }
        puts("");
    }

}
