#include <cstdio>
#include <vector>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long g(0), odds(0), count(0);
    for(long p = 0; p <= n; p++){
        g = gcd(a[p], g);
        if(a[p] % 2){++odds;}
        else{count += (odds / 2) + 2 * (odds % 2); odds = 0;}
    }

    puts("YES");
    printf("%ld\n", (g > 1) ? 0 : count);

    return 0;
}
