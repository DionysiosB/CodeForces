#include <cstdio>
#include <unordered_map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::unordered_map<long, long> m;
        for(long p = 0; p < 2 * n; p++){long x; scanf("%ld", &x); ++m[x];}
        long odds(0), evens(0);
        for(std::pair<long, long> x : m){(x.second % 2) ? (++odds) : (++evens);}
        printf("%ld\n", odds + 2 * evens - 2 * (!odds && (n - evens)%2) );
    }
    
}
