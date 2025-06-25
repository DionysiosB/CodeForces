#include <cstdio>
#include <vector>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        bool ans(n % 2);
        long long sumdiff(0); for(long p = 1; !ans && p < n; p += 2){sumdiff += (v[p] - v[p - 1]);}
        ans = ans || (sumdiff >= 0);
        puts(ans ? "YES" : "NO");
    }
 
}
