#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::set<long> s; for(long p = 1; p <= n; p++){s.insert(p);}
        for(long p = 0; p < m; p++){
            long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
            s.erase(b);
        }

        long cnode = *s.begin();
        for(long p = 1; p <= n; p++){
            if(p == cnode){continue;}
            printf("%ld %ld\n", cnode, p);
        }
    }

}
