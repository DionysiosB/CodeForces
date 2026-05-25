#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < n; p++){
        if(a[p] < 0){continue;}
        a[p] = -a[p] - 1;
    }

    if(n % 2){
        long mn(1e9);
        for(long p = 0; p < n; p++){mn = (mn < a[p]) ? mn : a[p];}
        for(long p = 0; p < n; p++){if(a[p] == mn){a[p] = -a[p] - 1; break;}}
    }

    for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
