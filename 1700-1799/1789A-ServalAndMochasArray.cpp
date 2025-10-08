#include <cstdio>
#include <vector>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);} 

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool res(false);
        for(long p = 0; !res && p < n; p++){
            for(long q = p + 1; !res && q < n; q++){
                if(gcd(a[p], a[q]) <= 2){res = true;}
            }
        }

        puts(res ? "Yes" : "No");
    }

}
