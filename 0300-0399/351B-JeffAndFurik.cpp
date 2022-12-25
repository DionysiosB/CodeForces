#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    long inv(0);
    for(long p = 0; p < n; p++){for(long q = p + 1; q < n; q++){inv += (a[p] > a[q]);}}

    printf("%ld\n", (inv / 2) * 4 + (inv % 2));

    return 0;
}
