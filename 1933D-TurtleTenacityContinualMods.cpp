#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e9 + 7), cnt(0);
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            if(a[p] < mn){mn = a[p]; cnt = 1;}
            else if(a[p] == mn){++cnt;}
        }

        if(cnt == 1){puts("YES"); continue;}

        bool sm(false);
        for(long p = 0; !sm && p < n; p++){
            if(a[p] % mn){sm = true;}
        }

        puts(sm ? "YES" : "NO");
    }

}
