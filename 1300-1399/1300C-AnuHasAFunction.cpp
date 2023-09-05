#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n), b(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]); b[p] = ~a[p];}
    std::vector<long> left(n), right(n);
    left[0] = b[0]; for(long p = 1; p < n; p++){left[p] = left[p - 1] & b[p];}
    right[n - 1] = b[n - 1]; for(long p = n - 2; p >= 0; p--){right[p] = right[p + 1] & b[p];}
    long ans = a[0] & right[1]; long pos = 0;
    if((a[n - 1] & left[n - 2]) > ans){ans = a[n - 1] & left[n - 2]; pos = n - 1;}
    for(long p = 1; p < n - 1; p++){
        long tmp = left[p - 1] & a[p] & right[p + 1];
        if(tmp > ans){ans = tmp; pos = p;}
    }

    long tmp = a[0]; a[0] = a[pos]; a[pos] = tmp;
    for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
