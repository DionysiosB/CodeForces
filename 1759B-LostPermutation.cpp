#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long m, s; scanf("%ld %ld", &m, &s);

        std::vector<long> b(m); long mx(0);
        for(long p = 0; p < m; p++){
            scanf("%ld", &b[p]);
            mx = (mx > b[p]) ? mx : b[p];
        }

        std::vector<bool> c(mx + 1, 0);
        for(long p = 0; p < m; p++){c[b[p]] = 1;}
        for(long p = 1; p < c.size(); p++){if(!c[p]){s -= p;}}
        while(s > 0){s -= ++mx;}
        puts(s == 0 ? "YES" : "NO");
    }

}
