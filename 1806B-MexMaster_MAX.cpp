#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++m[x];
        }

        long res(0);
        for(long p = 0; p < n; p++){
            if(m.count(p)){
                long val = m[p];
                if(val > 1){res = 2 * p + 1;}
                else{res = 2 * p; break;}
            }
            else{break;}
        }

        printf("%ld\n", res);


    }

}
