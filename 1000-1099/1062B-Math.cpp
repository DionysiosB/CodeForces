#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> div, h;
    long m(n);
    for(long p = 2; m > 1 && p <= n; p++){
        if(m % p){continue;}
        long cnt(0); while(m % p == 0){m /= p; ++cnt;}
        div.push_back(p); h.push_back(cnt);
    }

    long res(1); for(long p = 0; p < div.size(); p++){res *= div[p];}

    long cnt(0), z(h.size() ? h[0] : 1), w(1);
    bool same(true);
    for(long p = 1; p < h.size(); p++){
        if(h[p] != h[p - 1]){same = false;}
        z = (z > h[p]) ? z : h[p];
    }

    long moves(0); while(w < z){w *= 2; ++moves;}
    moves += (!same || w != z);
    printf("%ld %ld\n", res, moves);

    return 0;
}
