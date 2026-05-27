#include <cstdio>
#include <vector>
 
int main(){
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); v[p] = (p ? v[p - 1] : 0) ^ x;}

        bool possible(!v.back());
        for(long p = 0; !possible && p < n; p++){
            for(long q = p + 1; !possible && q < n; q++){
                possible |=  (v[p] == (v[q] ^ v[p]))  && (v[p] == (v.back() ^ v[q])); 
            }
        }

        puts(possible ? "YES" : "NO");
    }
}
