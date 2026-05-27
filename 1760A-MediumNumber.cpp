#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long res;
        if(a < b && b < c){res = b;}
        if(a < c && c < b){res = c;}
        if(b < a && a < c){res = a;}
        if(b < c && c < a){res = c;}
        if(c < a && a < b){res = a;}
        if(c < b && b < a){res = b;}

        printf("%ld\n", res);
    }

}
