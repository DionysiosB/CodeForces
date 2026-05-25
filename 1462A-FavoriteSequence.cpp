#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n, 0);
        long left(0), right(n - 1), idx(0);
        while(idx < n){
            b[idx++] = a[left++];
            if(idx >= n){break;}
            b[idx++] = a[right--];
        }

        for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
        puts("");
    }

    return 0;
}
