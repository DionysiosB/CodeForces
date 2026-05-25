#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> left(n, 0), right(n, 0);
        for(long p = 0; p < n; p++){left[p] = (p == 0 || left[p - 1]) && (a[p] >= p);}
        for(long p = n - 1; p >= 0; p--){right[p] = (p == n - 1 || right[p + 1]) && (a[p] >= n - 1 - p);}
        bool res(false);
        for(long p = 0; p < n && !res; p++){res |= (left[p] && right[p]);}
        puts(res ? "Yes" : "No");
    }

    return 0;
}
