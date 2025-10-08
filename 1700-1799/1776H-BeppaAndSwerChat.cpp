#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        long cnt(0), idx(n - 1);
        for(long p = n - 1; p >= 0; p--){
            if(a[p] == b[idx]){--idx;}
            else{++cnt;}
        }

        printf("%ld\n",cnt);
    }

}
