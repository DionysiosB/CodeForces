#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); long s(0);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]); s += v[p];}
        bool res(false);
        for(long p = 0; !res && p < n; p++){if(n * v[p] == s){res = true;}}
        puts(res ? "YES" : "NO");
    }

}
