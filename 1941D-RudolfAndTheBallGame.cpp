#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, x; scanf("%ld %ld %ld\n", &n, &m, &x);
        std::set<long> s; s.insert(x - 1);
        for(long p = 0; p < m; p++){
            long r(0); char d('?');
            scanf("%ld %c\n", &r, &d);

            std::set<long> w;
            for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){
                const long u = *it;
                if(d == '0' || d == '?'){w.insert( (u + r) % n);}
                if(d == '1' || d == '?'){w.insert( (n + (u - r) % n) % n);}
            }
            s = w;

        }


        printf("%ld\n", s.size());
        for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){printf("%ld ", 1 + *it);}
        puts("");
    }

}
