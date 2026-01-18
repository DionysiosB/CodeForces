#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s;
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.insert(x);}
        long prev(-1e9 - 7), cnt(1), mxcnt(1);
        for(long x : s){
            if(prev + 1 == x){++cnt;}
            else{cnt = 1;}
            prev = x;
            mxcnt = (mxcnt > cnt ? mxcnt : cnt);
        }

        printf("%ld\n", mxcnt);
    }

}
