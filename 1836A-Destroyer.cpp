#include <cstdio>
#include <vector>

int main(){

    const int N = 101;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(N, 0); bool res(true);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++v[x];}
        for(long p = 1; res && p < N; p++){if(v[p - 1] < v[p]){res = false;}}
        puts(res ? "YES" : "NO");
    }

}
