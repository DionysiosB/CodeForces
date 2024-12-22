#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        std::vector<long> a(m); for(long p = 0; p < m; p++){scanf("%ld", &a[p]);}
        std::vector<bool> d(n + 1, 1);
        for(long p = 0; p < k; p++){long x; scanf("%ld", &x); d[x] = 0;}
        long miss(0); for(long p = 1; !miss && p <= n; p++){if(d[p]){miss = p;}}
        
        for(long p = 0; p < m; p++){printf("%c", (k + 1>= n && (!miss || miss == a[p])) ? '1' : '0');}
        printf("\n");
    }
    
}
