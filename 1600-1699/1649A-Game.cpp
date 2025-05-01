#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long left(0); while(left + 1 < n && a[left + 1]){++left;}
        long right(n - 1); while(right > 0 && a[right - 1]){--right;}
        long cost = (right - left); cost = (cost > 0) ? cost : 0;
        printf("%ld\n", cost);
    }

}
