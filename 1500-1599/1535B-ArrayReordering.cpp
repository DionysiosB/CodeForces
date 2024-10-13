#include <cstdio>
#include <vector>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v, w;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            x % 2 ? w.push_back(x) : v.push_back(x);
        }

        long cnt(0);
        cnt += v.size() * (v.size() - 1) / 2 + v.size() * w.size();
        for(long p = 0; p < w.size(); p++){
            for(long q = p + 1; q < w.size(); q++){
                cnt += (gcd(w[p], w[q]) > 1);
            }
        }

        printf("%ld\n", cnt);
    }


}
