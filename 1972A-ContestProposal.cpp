#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        long cnt(0), idx(0);
        for(long p = 0; p < n; p++){
            if(b[p] < a[idx]){++cnt;}
            else{++idx;}
        }
        printf("%ld\n", cnt);
    }

}
