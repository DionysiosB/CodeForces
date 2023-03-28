#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n, 0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        bool ans(a[0] == 1);
        long long s(1);
        for(long p = 1; ans && p < n; p++){
            if(s < a[p]){ans = false;}
            else{s += a[p];}
        }

        puts(ans ? "YES" : "NO");
    }

}
