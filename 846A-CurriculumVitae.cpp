#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<int> a(n);
    for(long p = 0; p < n; p++){scanf("%d", &a[p]);}

    std::vector<long> left(n); left[0] = (a[0] == 0);
    for(long p = 1; p < n; p++){left[p] = left[p - 1] + (a[p] == 0);}

    std::vector<long> right(n); right[n - 1] = (a[n - 1] == 1);
    for(long p = n - 2; p >= 0; p--){right[p] = right[p + 1] + (a[p] == 1);}

    long total(0);
    for(long p = 0; p < n; p++){
        long cand = left[p] + right[p];
        total = (total > cand) ? total : cand;
    }

    printf("%ld\n", total);

    return 0;
}
