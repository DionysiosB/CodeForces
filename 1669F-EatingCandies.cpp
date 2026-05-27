#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> w(n); for(long p = 0; p < n; p++){scanf("%ld", &w[p]);}

        long left(-1), right(n), cnta(0), cntb(0), wa(0), wb(0), ans(0);
        while(cnta + cntb < n){
            if(wa <= wb){++left; ++cnta; wa += w[left];}
            else{--right; ++cntb; wb += w[right];}
            if(wa == wb){ans = cnta + cntb;}
        }

        printf("%ld\n", ans);
    }

}
