#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        if(n % 2){puts("YES"); continue;}
        sort(v.rbegin(), v.rend());
        bool res(false);
        for(long p = 1; !res && p < n; p += 2){
            if(v[p - 1] == v[p]){continue;}
            res = true;
        }

        puts(res ? "YES" : "NO");
    }

}
