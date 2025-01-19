#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > v(n, std::vector<long>(m, 0));
        for(long p = 0; p < n; p++){for(long q = 0; q < m; q++){scanf("%ld", &v[p][q]);}}

        bool res(true);
        std::vector<long> w(n, 0);
        for(long p = 0; res && p < n; p++){
            sort(v[p].begin(), v[p].end());
            w[v[p][0]] = p;
            for(long q = 1; res && q < m; q++){
                if(v[p][q - 1] + n != v[p][q]){res = false;}
            }
        }
        
        if(res){
            for(long p = 0; p < n; p++){printf("%ld ", 1 + w[p]);}
            puts("");
        }
        else{puts("-1");}
    }

}
