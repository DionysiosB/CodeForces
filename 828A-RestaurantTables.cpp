#include <cstdio>

int main(){

    long n, a, b; scanf("%ld %ld %ld\n", &n, &a, &b);
    long half(0), refused(0);
    while(n--){
        int g; scanf("%d", &g);
        if(g == 1){
            if(a > 0){--a;}
            else if(b > 0){--b; ++half;}
            else if(half > 0){--half;}
            else{++refused;}
        }
        else if(g == 2){
            if(b > 0){--b;}
            else{refused += 2;}
        }
    }

    printf("%ld\n", refused);

    return 0;
}
