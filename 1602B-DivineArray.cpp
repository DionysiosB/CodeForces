#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 1);
        for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}


        std::vector<std::vector<long> > v;
        v.push_back(a);
        bool done(false);
        while(!done){
            std::map<long, long> m;
            for(long p = 1; p <= n; p++){++m[a[p]];}
            std::vector<long> b(n + 1); bool chg(false);
            for(long p = 1; p <= n; p++){
                b[p] = m[a[p]];
                if(b[p] != a[p]){chg = true;}
            }
            if(!chg){done = true;}
            v.push_back(b); a = b;
        }

        long q; scanf("%ld", &q);
        while(q--){
            long x, k; scanf("%ld %ld", &x, &k);
            if(k >= v.size()){k = v.size() - 1;}
            printf("%ld\n", v[k][x]);
        }

    }

}
