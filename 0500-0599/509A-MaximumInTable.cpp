#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<long long> a(n, 1);
    for(int p = 1; p < n; p++){for(int q = 1; q < n; q++){a[q] += a[q - 1];}}
    printf("%lld\n", a[n - 1]);
    return 0;

}
