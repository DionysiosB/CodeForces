#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool ans(true);
        for(long p = 0; p < n; p++){if((a[0] - a[p]) % 2){ans = false; break;}}
        puts(ans ? "YES" : "NO");
    }

    return 0;
}
