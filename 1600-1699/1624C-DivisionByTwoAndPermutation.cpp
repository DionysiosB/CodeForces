#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<bool> v(n + 1, false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            while(x){
                if((1 <= x) && (x <= n) && (!v[x])){v[x] = true; break;}
                x /= 2;
            }
        }

        bool res(true); for(long p = 1; p <= n; p++){if(!v[p]){res = false; break;}}
        puts(res ? "YES" : "NO");
    }

}
