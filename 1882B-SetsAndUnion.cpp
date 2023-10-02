#include <cstdio>
#include <vector>

int main(){

    const int B = 57;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::vector<long> > s(n);
        std::vector<long> cnt(B, 0); long uniq(0);
        for(long p = 0; p < n; p++){
            long num; scanf("%ld", &num);
            s[p] = std::vector<long>(num);
            for(long u = 0; u < num; u++){
                long x; scanf("%ld", &x);
                s[p][u] = x;
                uniq += !cnt[x];
                ++cnt[x];
            }
        }

        long res(0);
        for(long p = 0; p < n; p++){
            long cur(uniq);
            for(long u = 0; u < s[p].size(); u++){
                long x = s[p][u];
                cur -= (cnt[x] == 1);
            }
            if(cur != uniq){res = (res > cur) ? res : cur;}
        }

        printf("%ld\n", res);
    }

}
