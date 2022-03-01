#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 1);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        a[n] = 1e9 + 7;
        long cnt(0);
        for(long p = 1; p + 1 < n; p++){
            if(a[p - 1] < a[p] && a[p] > a[p + 1]){
                if(p + 2 >= n){a[p + 1] = a[p];}
                else{a[p + 1] = a[p] > a[p + 2] ? a[p] : a[p + 2];}
                ++cnt;
            }
        }

        printf("%ld\n", cnt);
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
