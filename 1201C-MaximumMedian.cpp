#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long mid(n / 2), res(a[mid]);
    for(long p = n / 2; p + 1 < n; p++){
        long diff = a[p + 1] - res;
        long dist = p + 1 - mid;
        long add = (diff < (k / dist)) ? diff : (k / dist);
        res += add;
        k -= add * dist; 
    }

    res += (2 * k) / (n + 1);
    printf("%ld\n", res);

    return 0;
}
