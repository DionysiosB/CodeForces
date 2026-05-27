#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::set<long> s;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s.insert(x);
        }

        bool res(false);
        for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){
            if(s.count(k + *it)){res = true; break;}
        }

        puts(res ? "YES" : "NO");
    }
}
