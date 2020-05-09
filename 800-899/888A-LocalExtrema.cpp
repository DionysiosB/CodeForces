#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    long count(0);
    for(long p = 1; p < n - 1; p++){
        if(a[p - 1] > a[p] && a[p] < a[p + 1]){++count;}
        if(a[p - 1] < a[p] && a[p] > a[p + 1]){++count;}
    }

    printf("%ld\n", count);

    return 0;
}
