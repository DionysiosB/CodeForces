#include <cstdio>
#include <unordered_set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::unordered_set<long> s;
        bool ans(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(s.count(x)){ans = true;}
            else{s.insert(x);}
        }
        puts(ans ? "YES" : "NO");
    }

}
