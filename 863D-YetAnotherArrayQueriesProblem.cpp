#include <cstdio>
#include <vector>

int main(){

    long n, q, m; scanf("%ld %ld %ld", &n, &q, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> t(q), l(q), r(q); for(long p = 0; p < q; p++){scanf("%ld %ld %ld", &t[p], &l[p], &r[p]); --l[p]; --r[p];}

    while(m--){
        long ind; scanf("%ld", &ind); --ind;
        for(long u = q - 1; u >= 0; u--){
            if(ind < l[u] || r[u] < ind){continue;}
            if(t[u] == 1){ind = (ind == l[u]) ? r[u] : (ind - 1);}
            else{ind = l[u] + r[u] - ind;}
        }

        printf("%ld ", a[ind]);
    }
    puts("");

    return 0;
}
