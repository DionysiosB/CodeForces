#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(-1); std::map<long, long> f;
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(f.count(a)){
                long dist = p - f[a] + 1;
                if(res < 0 || res > dist){res = dist;}
            }
            f[a] = p;
        }

        printf("%ld\n", res);
    }

    return 0;
}
