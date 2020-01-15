#include <cstdio>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long a[10]; for(long p = 0; p < 10; p++){scanf("%ld", a + p);}
        int d(0); long rep = a[0];
        for(long p = 9; p >= 1; p--){if(a[p] <= rep){rep = a[p]; d = p;}}
        if(d == 0){printf("1");}
        for(long p = 0; p <= rep; p++){printf("%d", d);}
        puts("");
    }

    return 0;
}
