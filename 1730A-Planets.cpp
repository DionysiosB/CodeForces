#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, c; scanf("%ld %ld", &n, &c);
        std::map<long, long> m;
        while(n--){long x; scanf("%ld", &x); ++m[x];}
        long res(0);
        for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            long val = it->second;
            res += (val < c) ? val : c;
        }

        printf("%ld\n", res);
    }

}
