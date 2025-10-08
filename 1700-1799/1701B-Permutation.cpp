#include <cstdio>
#include <set>


int main(){

    const long d = 2;

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s; for(long p = 1; p <= n; p++){s.insert(p);}
        printf("%ld\n", d);
        while(s.size()){
            long cur = *s.begin();
            for(long p = cur; p <= n; p *= d){
                if(!s.count(p)){break;}
                printf("%ld ", p);
                s.erase(p);
            }
        }

        puts("");
    }

}
