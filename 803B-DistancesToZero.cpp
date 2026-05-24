#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(n, n + 1);
    long d = n + 1;
    for(long p = 0; p < n; p++){
        if(a[p] == 0){d = 0;}
        else{++d;}
        b[p] = (b[p] < d) ? b[p] : d;
    }

    d = n + 1;
    for(long p = n - 1; p >= 0; p--){
        if(a[p] == 0){d = 0;} else{++d;}
        b[p] = (b[p] < d) ? b[p] : d;
    }

    for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
    puts("");

    return 0;
}
