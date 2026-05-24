#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(2 * n, 0);

    for(long p = 1; p < n; p++){
        if(p & 1){a[p / 2] = a[n - (p + 1) / 2] = p;}
        else{a[n - 1 + p / 2] = a[2 * n - 1 - (p / 2)] = p;}
    }
    a[2 * n - 1] = n;
    if(n & 1){a[n / 2] = n;} else{a[n - 1 + n / 2] = n;}

    for(long p = 0; p < 2 * n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
