#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a(m); for(long p = 0; p < m; p++){scanf("%ld", &a[p]);}
        long ans(n - a.back() + 1);
        for(long p = 1; p < m; p++){if(a[p] == 1){ans = 1; break;}}
        printf("%ld\n", ans);
    }

}
