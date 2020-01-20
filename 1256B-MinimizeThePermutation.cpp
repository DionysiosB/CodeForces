#include <cstdio>
#include <vector>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

        long start(0); std::vector<long> b;
        while(start < n){
            long mn(a[start]), nxt(start);
            for(long p = start; p < n; p++){if(a[p] < mn){mn = a[p]; nxt = p;}}
            b.push_back(mn);
            for(long p = start; p < nxt - 1; p++){b.push_back(a[p]);}
            if(nxt > start){a[nxt] = a[nxt - 1]; start = nxt;}
            else{++start;}
        }

        for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
        puts("");
    }

    return 0;
}
