#include <cstdio>
#include <vector>
#include <map>

int main(){

    const std::vector<long> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0); std::map<long, long> m;
        std::vector<long> res(n); 
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            for(long q = 0; q < v.size(); q++){
                if(a % v[q]){continue;}
                int col(0);
                if(!m.count(v[q])){m[v[q]] = ++cnt;}
                res[p] = m[v[q]];
                break;
            }
        }

        printf("%ld\n", cnt);
        for(long p = 0; p < n; p++){printf("%ld ", res[p]);}
        puts("");
    }

    return 0;
}
