#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> x(n);
    std::vector<long> h(n);

    for(int p = 0; p < n; p++){scanf("%ld %ld\n", &x[p], &h[p]);}
    long count = (n == 1) ? 1 : 2;
    for(int p = 1; p < n - 1; p++){
        if(x[p] - x[p - 1] > h[p]){++count;}
        else if(x[p + 1] - x[p] > h[p]){++count; x[p] += h[p];}
    }

    printf("%ld\n", count);

    return 0;
}
