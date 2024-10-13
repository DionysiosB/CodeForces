#include <cstdio>
#include <vector>

long find(std::vector<long> &L, ll x){
    if(x == L[x]){return x;}
    return find(L, L[x]);
}





int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}

        std::vector<long> avail(n + 1, 0); for(long p = 0; p <= n; p++){avail[p] = p;}
        std::vector<long> ans(n, -1);
        for(long p = 0; p < n; p++){
            if(p == 0 || v[p] > v[p - 1]){upper = v[p];}
            ans[p] = find(last);
        }


        for(long p = 0; p < n; p++){printf("%ld ", ans[p]);}
        puts("");
    }

}
