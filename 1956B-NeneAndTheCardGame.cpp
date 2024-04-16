#include <cstdio>
#include <unordered_set>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::unordered_set<long> s;
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(s.count(x)){++cnt;}
            else{s.insert(x);}
        }

        printf("%ld\n", cnt);
    }

}
