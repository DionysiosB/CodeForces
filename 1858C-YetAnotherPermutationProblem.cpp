#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld\n", &n);
        std::set<long> s; for(long p = 1; p <= n; p++){s.insert(p);}
        while(!s.empty()){
            long cur = *s.begin();
            while(s.count(cur)){
                printf("%ld ", cur);
                s.erase(cur);
                cur *= 2;
            }
        }

        puts("");
    }

}
