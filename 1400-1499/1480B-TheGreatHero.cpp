#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long A, B, n; scanf("%ld %ld %ld", &A, &B, &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        std::vector<long> d(n); for(long p = 0; p < n; p++){d[p] = ((b[p] - 1) / A) * a[p];}
        //for(long p = 0; p < n; p++){printf("B:%ld d[%ld]:%ld\n", B, p, d[p]);}
        for(long p = 0; p < n; p++){B -= d[p];}
        sort(a.begin(), a.end());
        bool res(B > 0);
        for(long p = 0; p < n; p++){
            if(B <= 0){res = false; break;}
            B -= a[p];
        }

        puts(res ? "YES" : "NO");
    }

}
