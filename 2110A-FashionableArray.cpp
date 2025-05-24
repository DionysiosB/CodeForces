#include <cstdio>
#include <vector>
#include <algorithm>


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        sort(v.begin(), v.end());

        long cnt(0);
        for(long p = 0; p < n; p++){
            if((v[p] + v.back()) % 2){++cnt;}
            else{break;}
        }

        long ans(cnt);
        cnt = 0;
        for(long p = n - 1; p >= 0; p--){
            if((v[0] + v[p]) % 2){++cnt;}
            else{break;}
        }

        ans = (ans < cnt ? ans : cnt);
        printf("%ld\n", ans);
    }

}
