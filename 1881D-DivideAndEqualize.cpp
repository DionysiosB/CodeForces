#include <cstdio>
#include <map>


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            for(long p = 2; p * p <= x; p++){
                while(x % p == 0){++m[p]; x /= p;}
            }
            if(x > 1){++m[x];}
        }

        bool res(true);
        for(std::map<long, long>::iterator it = m.begin(); res && it != m.end(); it++){
            if(it->second % n){res = false;}
        }
        puts(res ? "YES" : "NO");
    }

}
