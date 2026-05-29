#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        long s(x - y); s = (s > 0 ? s : -s);
        if(s == 0){puts("1");}
        else{
            long cnt(0);
            for(long p = 1; p * p <= s; p++){
                if(s % p){continue;}
                cnt += 2 - (p * p == s);
            }
            printf("%ld\n", cnt);
        }

        while(x--){printf("1 ");}
        while(y--){printf("-1 ");}
        puts("");
    }

}
