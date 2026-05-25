#include <cstdio>
#include <vector>

int main(){

    const long N = 107;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> b(N, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++b[x];}
        bool empty(true); long s(0);
        for(long p = 0; p < N; p++){
            if(b[p] > 1){continue;}
            else if(b[p] == 1 && empty){s = p; empty = false;}
            else if(b[p] == 0){s += (empty ? 2 : 1) * p; break;}
        }

        printf("%ld\n", s);
    }

    return 0;
}
