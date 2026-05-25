#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        if(b > a){long tmp = a; a = b; b = tmp;}
        if(c > a){long tmp = a; a = c; c = tmp;}
        if(c > b){long tmp = c; c = b; b = tmp;}

        long cnt(0);
        if(a){--a; ++cnt;}
        if(b){--b; ++cnt;}
        if(c){--c; ++cnt;}
        if(a && b){++cnt; --a; --b;}
        if(a && c){++cnt; --a; --c;}
        if(b && c){++cnt; --b; --c;}
        if(a && b && c){++cnt; --a; --b; --c;}

        printf("%ld\n", cnt);
    }

    return 0;
}
