#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%ld", &v[p]);}
        bool res(true);
        for(long B = 1; res && B <= 2 * n; B *= 2){
            for(long p = B + 1; res && p < 2 * B && p + 1 < v.size(); p++){
                if(v[p] > v[p + 1]){res = false;}
            }
        }

        puts(res ? "YES" : "NO");
    }

}
