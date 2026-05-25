#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long q; int d; scanf("%ld %d", &q, &d);
        while(q--){
            long x; scanf("%ld", &x);
            if((x > 10 * d) || (x % d == 0)){puts("YES");}
            else{
                bool res(false);
                for(int p = 1; p < d; p++){
                    if(x < 10 * p + d){break;}
                    if( (x - (10 * p + d)) % d == 0){res = true; break;}
                }

                puts(res ? "YES" : "NO");
            }
        }
    }

}
