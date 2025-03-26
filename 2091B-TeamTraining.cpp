#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.rbegin(), a.rend());
        long num(0), cnt(0);
        for(long p = 0; p < n; p++){
            ++num;
            if(num * a[p] >= x){++cnt; num = 0;}
        }

        printf("%ld\n", cnt);
    }

}
