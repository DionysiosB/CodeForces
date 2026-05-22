#include <cstdio>
#include <cstdlib>
#include <algorithm>

int main(){
    int n; scanf("%d\n", &n);
    long *array = new long[n + 1];
    for(int k = 1; k <= n; k++){scanf("%ld", array + k);}
    std::sort(array + 1, array + n + 1);
    int64_t total = 0;
    for(int k = 1; k <= n; k++){total += abs(array[k] - k);}
    printf("%lld\n", total);
    return 0;
}
