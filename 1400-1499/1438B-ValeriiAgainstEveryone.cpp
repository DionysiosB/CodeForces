#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s;
        bool ans(false);
        for(long p = 0; p < n; p++){
            long b; scanf("%ld", &b);
            if(s.count(b)){ans = true;}
            s.insert(b);
        }

        puts(ans ? "YES" : "NO");
    }

    return 0;
}
