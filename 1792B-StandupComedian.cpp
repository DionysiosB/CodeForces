#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        long cnt(a);
        long m = (b < c ? b : c);
        if(a){cnt += 2 * m; b -= m; c -= m;}
        if(b){long more = (a < b ? a : b); b -= more; a -= more; cnt += more;}
        else{long more = (a < c ? a : c); c -= more; a -= more; cnt += more;}
        if(a > 0){long more = (a < d ? a : d); d -= more; a -= more; cnt += more;}
        if(b > 0 || c > 0 || d > 0){++cnt;}
        printf("%ld\n", cnt);
    }

}
