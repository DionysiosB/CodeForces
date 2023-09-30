#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        long w, rep; scanf("%ld %ld", &w, &rep);
        bool possible(true);
        for(long p = 1; p < n; p++){
            long s, e; scanf("%ld %ld", &s, &e);
            if(s < w){continue;}
            else if(e >= rep){possible = false;}
        }

        if(possible){printf("%ld\n", w);}
        else{puts("-1");}
    }

}
