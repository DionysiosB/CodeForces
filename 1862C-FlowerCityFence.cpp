#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        std::vector<long> w(n + 1); bool res(true);
        for(long p = 0; res && p < n; p++){
            ++w[0];
            if(v[p] > n){res = false;}
            else{--w[v[p]];}
        }

        long cs(0);
        for(long p = 0; res && p < n; p++){
            cs += w[p];
            if(cs != v[p]){res = false;}
        }

        puts(res ? "YES" : "NO");
    }

}
