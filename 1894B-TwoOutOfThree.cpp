#include <cstdio>
#include <vector>

int main(){

    const int B = 107;

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::vector<int> > m(B, std::vector<int>());
        std::vector<long> a(n), b(n, 1);

        long dupes(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            m[a[p]].push_back(p);
            if(m[a[p]].size() == 2){++dupes;}
        }

        if(dupes < 2){puts("-1"); continue;}
        int cur(0);
        for(long p = 0; p < B; p++){
            if(m[p].size() < 2){continue;}
            b[m[p][0]] = 2 + cur; cur = 1 - cur;
        }

        for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
        puts("");
    }

}
