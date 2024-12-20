#include <cstdio>
#include <set>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s; for(long p = 1; p <= n; p++){s.insert(p);}
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            long x = (s.count(a) ? a : *s.begin());
            s.erase(x);
            printf("%ld ", x);
        }
        puts("");
    }
}
