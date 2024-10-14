#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        std::vector<long> v(n, 0);
        for(long p = 0; p < n; p++){long b; scanf("%ld", &b); if(b < n){++v[b];}}
        long mex(n);
        for(long p = 0; p < n; p++){
            if(!v[p]){mex = p; break;}
            if(p + x < n){v[p + x] += (v[p] - 1);}
        }
        printf("%ld\n", mex);
    }

}
