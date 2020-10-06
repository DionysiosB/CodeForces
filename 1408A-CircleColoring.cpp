#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        std::vector<long> c(n); for(long p = 0; p < n; p++){scanf("%ld", &c[p]);}

        long cur(0), prev(a[0]); printf("%ld ", prev);
        for(long p = 1; p + 1 < n; p++){
            long cur(0);
            if(a[p] != prev){cur = a[p];}
            else if(b[p] != prev){cur = b[p];}
            else if(c[p] != prev){cur = c[p];}
            printf("%ld ", cur);
            prev = cur;
        }

        if(a.back() != a[0] && a.back() != prev){cur = a.back();}
        else if(b.back() != a[0] && b.back() != prev){cur = b.back();}
        else if(c.back() != a[0] && c.back() != prev){cur = c.back();}
        printf("%ld\n", cur);
    }

    return 0;
}
