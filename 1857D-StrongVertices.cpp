#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].first); v[p].second = p + 1;}
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); v[p].first -= x;}
        sort(v.rbegin(), v.rend());
        long cnt(0); for(long p = 0; p < n; p++){
            if(v[p].first == v[0].first){++cnt;}
            else{break;}
        }

        printf("%ld\n", cnt);
        for(long p = cnt - 1; p >=0; p--){printf("%ld ", v[p].second);}
        puts("");
    }

}
