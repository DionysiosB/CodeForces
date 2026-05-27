#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> pos;
        long md(n + 1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(pos.count(x)){md = (md < (p - pos[x]) ? md: (p - pos[x]));}
            pos[x] = p;
        }

        printf("%ld\n", n - md);
    }

}
