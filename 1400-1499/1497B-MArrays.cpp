#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> v(m, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++v[x % m];}
        long cnt(v[0] > 0);
        for(long p = 1; p <= m - p; p++){
            if(p == m - p && v[p] > 0){++cnt;}
            else if(v[p] || v[m - p]){
                ++cnt;
                long rem = v[p] - v[m - p];
                if(rem < 0){rem *= -1;}
                if(rem > 1){cnt += rem - 1;}
            }

            //printf("p:%ld  v[p]:%ld  v[m - p]:%ld  Cnt:%ld\n", p, v[p], v[m - p], cnt);
        }

        printf("%ld\n", cnt);
    }

}
