#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 2, 0); for(long p = 1; p <= n; p++){long x; scanf("%ld", &x); a[x] = p;}
        std::vector<bool> b(n + 2, 0);
        long cnt(0);
        for(long p = 1; p <= n; p++){
            long x = a[p]; b[x] = 1;
            if(!(b[x - 1] || b[x + 1])){++cnt;}
            else if(b[x - 1] && b[x + 1]){--cnt;}
            printf("%d", (cnt <= 1));
        }
        puts("");
    }

    return 0;
}
