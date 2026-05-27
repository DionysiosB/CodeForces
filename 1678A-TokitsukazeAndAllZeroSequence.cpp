#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool same(false); long zero(0); std::set<long> s;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == 0){++zero;}
            if(s.count(x)){same = true;}
            s.insert(x);
        }

        long ans(0);
        if(zero > 0){ans = n - zero;}
        else if(same){ans = n;}
        else{ans = n + 1;}
        printf("%ld\n", ans);
    }

}
