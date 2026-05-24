#include <cstdio>
#include <vector>

int main(){

    int n, k; scanf("%d %d", &n, &k);
    std::vector<int> a(n + 1);
    a[0] = k;
    for(int p = 1; p < n + 1; p++){scanf("%d", &a[p]);}
    long total(0);
    for(int p = 1; p < n + 1; p++){
        int s = a[p - 1] + a[p];
        if(s < k){a[p] += (k - s); total += (k - s);}
    }

    printf("%ld\n", total);
    for(int p = 1; p < n + 1; p++){printf("%d ", a[p]);}
    puts("");

    return 0;
}
