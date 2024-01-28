#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, x; scanf("%ld %ld %ld", &n, &k, &x);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.rbegin(), a.rend());
        for(long p = 1; p < n; p++){a[p] += a[p - 1];}
        long res(a.back() - 2 * a[x - 1]);

        for(long p = 0; p < k; p++){
            long idxB = p + x;
            idxB = (idxB < n - 1 ? idxB : n - 1);
            long cur = a.back() - 2 * a[idxB] + a[p];
            res = (res > cur ? res : cur);
        }

        printf("%ld\n", res);
    }

}
