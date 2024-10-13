#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        long mx(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            ++m[a];
            mx = (mx > m[a]) ? mx : m[a];
        }

        long res(0);
        if(2 * mx > n){res = 2 * mx - n;}
        else if(n % 2){res = 1;}
        printf("%ld\n", res);
    }

}
