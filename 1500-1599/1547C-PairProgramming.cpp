#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){

        long k, n, m; scanf("%ld %ld %ld", &k, &n, &m);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}

        long len(k), ta(0), tb(0);
        bool possible(true);
        std::vector<long> res(m + n, 0);
        for(long p = 0; p < m + n; p++){
            if(ta >= n){res[p] = b[tb++];}
            else if(tb >= m){res[p] = a[ta++];}
            else if(a[ta] == 0){res[p] = a[ta++];}
            else if(b[tb] == 0){res[p] = b[tb++];}
            else if(a[ta] < b[tb]){res[p] = a[ta++];}
            else if(b[tb] <= a[ta]){res[p] = b[tb++];}
            len += (res[p] == 0);
            if(res[p] > len){possible = false; break;}
        }


        if(!possible){puts("-1");}
        else{
            for(long p = 0; p < res.size(); p++){printf("%ld ", res[p]);}
            puts("");
        }
    }

}
