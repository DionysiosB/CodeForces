#include <cstdio>
#include <vector>

int main(){

    const int B = 6;
    std::vector<int> a(B, 0);
    long n; scanf("%ld", &n);
    for(long p = B - 1; p >= 0; p--){a[p] = n % 2; n /= 2;}
    int x;
    x = a[1]; a[1] = a[5]; a[5] = x;
    x = a[2]; a[2] = a[3]; a[3] = x;
    long res(0), w(1);
    for(long p = B - 1; p >= 0; p--){res += a[p] * w; w *= 2;}
    printf("%ld\n", res);

    return 0;
}
