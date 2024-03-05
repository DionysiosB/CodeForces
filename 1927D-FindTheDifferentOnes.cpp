#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n + 1, 0);

        long prev(0);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            if(x != prev){v[p] = p - 1;}
            else{v[p] = v[p - 1];}
            prev = x;
        }

        long q; scanf("%ld", &q);
        while(q--){
            long l, r; scanf("%ld %ld", &l, &r);
            if(v[r] < l){puts("-1 -1");}
            else{printf("%ld %ld\n",v[r], r);}
        }

    }

}
