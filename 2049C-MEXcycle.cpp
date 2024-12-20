#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
        --x; --y;
        std::vector<long> v(n);
        for(long p = 0; p < n; p++){v[(x + p) % n] = p % 2;}
        if(n % 2 || (x - y) % 2 == 0){v[x] = 2;}
        
        for(long p = 0; p < n; p++){printf("%ld ", v[p]);}
        puts("");
    }
    
}
