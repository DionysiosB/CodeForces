#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d", &n);
    std::vector<long> a(n, 0);
    long max(0);
    for(int p = 0; p < n; p++){scanf("%ld", &a[p]); max = (max > a[p]) ? max : a[p];}
    long total(0);
    for(int p = 0; p < n; p++){total += max - a[p];}
    printf("%ld\n", total);

    return 0;
}
