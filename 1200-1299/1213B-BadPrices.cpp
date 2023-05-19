#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long cnt(0), mn(1e7);
        for(long p = n - 1; p >= 0; p--){cnt += (a[p] > mn); mn = (mn < a[p]) ? mn : a[p];}
        printf("%ld\n", cnt);
    }

    return 0;
}
