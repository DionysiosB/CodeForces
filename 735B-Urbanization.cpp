#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, n1, n2; scanf("%ld %ld %ld", &n, &n1, &n2);
    std::vector<long> a(n, 0);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());

    if(n1 > n2){long temp = n1; n1 = n2; n2 = temp;}

    double avg1(0), avg2(0);
    for(int p = n - 1; p >= n - n1; p--){avg1 += a[p];}
    for(int p = n - n1 - 1; p >= n - n1 - n2; p--){avg2 += a[p];}

    avg1 /= n1; avg2 /= n2;
    double ans = avg1 + avg2;
    printf("%.8lf\n", ans);

    return 0;
}
