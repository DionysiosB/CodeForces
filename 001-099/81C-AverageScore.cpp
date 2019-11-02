#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    const long N = 10;
    long n; scanf("%ld", &n);
    long a, b; scanf("%ld %ld", &a, &b);
    if(a == b){for(long p = 0; p < n; p++){printf("%ld ", (p < a) ? 1L : 2L);}}
    else{
        std::vector<std::vector<long> > v(N);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); v[x].push_back(p);}
        std::vector<long> s(n);
        long x(a), y(b);
        if(a > b){
            for(long p = 0; p < N; p++){
                for(long u = 0; u < v[p].size(); u++){
                    long pos = v[p][u];
                    s[pos] = (x > 0) ? 1 : 2;
                    --x;
                }
            }
        }
        else{
            for(long p = N - 1; p >= 0; p--){
                for(long u = 0; u < v[p].size(); u++){
                    long pos = v[p][u];
                    s[pos] = (x > 0) ? 1 : 2;
                    --x;
                }
            }
        }

        for(long p = 0; p < n; p++){printf("%ld ", s[p]);}
    }

    puts("");

    return 0;
}
