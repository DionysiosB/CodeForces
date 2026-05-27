#include <cstdio>
#include <vector>

long gcd(long a, long b){return b ? gcd(b, a % b) : a;}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool res(true);
        for(long p = 1; res && p + 1 < n; p++){if(a[p] % gcd(a[p - 1], a[p + 1])){res = false;}}
        puts(res ? "YES" : "NO");
    }

}
