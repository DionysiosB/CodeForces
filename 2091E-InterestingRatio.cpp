#include <cstdio>
#include <vector>

int main(){
    
    const long N = 1e7 + 7;
    std::vector<bool> vb(N, 1);
    vb[0] = vb[1] = 0;
    for(long p = 2; p < vb.size(); p++){
        if(!vb[p]){continue;}
        for(long q = 2 * p; q < vb.size(); q += p){vb[q] = 0;}
    }

    std::vector<long> w;
    for(long p = 0; p < vb.size(); p++){if(vb[p]){w.push_back(p);}}

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long long cnt(0);
        for(long p = 0; p < w.size(); p++){
            if(w[p] > n){break;}
            cnt += n / w[p];
        }

        printf("%lld\n", cnt);
    }

}
