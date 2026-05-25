#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::pair<long, long> > f(n);
        for(long p = 0; p < n; p++){scanf("%ld %ld", &f[p].first, &f[p].second);}

        bool res(false);
        for(long p = 0; p < n; p++){
            bool cur(true);
            for(long q = 0; q < n; q++){
                long dx = f[p].first - f[q].first; if(dx < 0){dx = -dx;}
                long dy = f[p].second - f[q].second; if(dy < 0){dy = -dy;}
                if(dx + dy > k){cur = false; break;}
            }

            if(cur){res = true; break;}
        }

        printf("%d\n", res ? 1 : -1);
    }

}
