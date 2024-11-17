#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long k; scanf("%ld", &k);
        std::set<long> vs, ds;
        for(long p = 0; p < k; p++){
            long x; scanf("%ld", &x);
            if(vs.count(x)){ds.insert(x);}
            else{vs.insert(x);}
        }

        long target(k - 2), n(-1), m(-1);
        for(std::set<long>::iterator it = vs.begin(); it != vs.end(); it++){
            long dv = *it;
            if(!dv || target % dv){continue;}
            if(dv * dv == target && ds.count(dv)){n = m = dv; break;}
            else if(vs.count(target / dv)){n = dv; m = target / dv; break;}
        }

        printf("%ld %ld\n", n, m);
    }

}
