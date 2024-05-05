#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 1), b(n + 1), c(n + 1);
        for(long p = 1; p <= n; p++){scanf("%ld", &a[p]); b[p] = c[p] = a[p];}
        for(long p = 1; p <= n; p++){b[p] = (b[p] > b[p - 1]) ? b[p] : b[p - 1];}
        for(long p = n - 1; p >= 0; p--){c[p] = (c[p] > c[p + 1]) ? c[p] : c[p + 1];}

        bool done(false);
        for(long p = 1; p <= n - 2 && !done; p++){
            long mn = 1e9 + 7; long cnt(1);
            for(long q = p + 1; q <= n - 1; q++, cnt++){
                mn = (mn < a[q]) ? mn : a[q];
                if(mn == b[p] && mn == c[q + 1]){
                    printf("YES\n%ld %ld %ld\n", p, cnt, n - p - cnt);
                    done = true;
                    break;
                }
                else if(mn < b[p]){break;}
            }
        }

        if(done){continue;}
        puts("NO");
    }
}
