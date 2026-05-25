#include <cstdio>
#include <vector>

int main(){

    const long N = 101;
    long q; scanf("%ld", &q);
    while(q--){
        long n; scanf("%ld", &n);
        std::vector<bool> a(N, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a[x] = 1;}
        bool both(false);
        for(long p = 1; !both && p < N; p++){both |= a[p - 1] && a[p];}
        printf("%d\n", 1 + both);
    }

    return 0;
}
