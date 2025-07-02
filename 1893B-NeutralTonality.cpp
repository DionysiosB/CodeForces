#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}
        sort(b.rbegin(), b.rend());

        long idxa(0), idxb(0);
        std::vector<long> f;
        while(f.size() < n + m && (idxa < n || idxb < m)){
            if(idxa < n && idxb < m && a[idxa] >= b[idxb]){f.push_back(a[idxa++]);}
            else if(idxa < n && idxb < m && a[idxa] <= b[idxb]){f.push_back(b[idxb++]);}
            else if(idxa < n){f.push_back(a[idxa++]);}
            else if(idxb < m){f.push_back(b[idxb++]);}
            else{break;}
        }

        for(long p = 0; p < f.size(); p++){printf("%ld ", f[p]);}
        puts("");
    }

}
