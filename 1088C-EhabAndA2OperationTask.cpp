#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    long mx(0);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]); mx = (mx > a[p]) ? mx : a[p];}
    printf("%ld\n", n + 1);
    long sum(0);
    for(long p = n - 1; p >= 0; p--){
        long add = (p - (a[p] + sum)%n + n) % n;
        printf("1 %ld %ld\n", p + 1, add);
        sum += add;
    }

    printf("2 %ld %ld\n", n, n);

    return 0;
}
