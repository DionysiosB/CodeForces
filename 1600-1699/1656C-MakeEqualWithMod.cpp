#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); bool one(false);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            if(a[p] == 1){one = true;}
        }
        sort(a.begin(), a.end());
        bool res(true);
        for(long p = 1; one && res && p < n; p++){if(a[p] == 1 + a[p - 1]){res = false; break;}}
        puts(res ? "YES" : "NO");
    }

}
