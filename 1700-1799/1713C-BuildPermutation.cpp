#include <cstdio>
#include <vector>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        long idx(n - 1);
        while(idx >= 0){
            long s(0); while(s * s <= idx){++s;}
            printf("s:%ld ss:%ld idx:%lld\n", s, s * s, idx);
            for(int p = s * s - idx; p <= idx; p++){v[p] = s * s - p;}
            idx = s * s - idx - 1;
        }

        for(long p = 0; p < n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
