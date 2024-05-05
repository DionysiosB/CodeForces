#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 1, 0), b(n + 1, 0);
        std::set<long> cs;
        for(long p = 1; p <= n; p++){scanf("%ld", &a[p]); b[p] = b[p - 1] + a[p]; cs.insert(b[p]);}
        long total = b.back();
        long res(n - 1);
        for(long p = 1; p <= n; p++){
            if(total % b[p]){continue;}
            long cnt = total / b[p];
            bool possible(true);
            for(long mult = 2; mult < cnt; mult++){if(cs.count(mult * b[p]) == 0){possible = false; break;}}
            if(possible){res = n - cnt; break;}
        }

        printf("%ld\n", res);
    }


}
