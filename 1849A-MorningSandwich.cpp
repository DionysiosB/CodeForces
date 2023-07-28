#include <cstdio>

int main(){
   
    long t; scanf("%ld", &t);
    while(t--){
        long b, c, h; scanf("%ld %ld %ld", &b, &c, &h);
        c += h;
        long ans(0);
        if(b >= c + 1){ans = 2 * c + 1;}
        else{ans = 2 * b - 1;}
        printf("%ld\n", ans);
    }
   
}
