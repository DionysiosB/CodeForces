#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long xa, ya; scanf("%ld %ld", &xa, &ya);
        long xb, yb; scanf("%ld %ld", &xb, &yb);
        long xc, yc; scanf("%ld %ld", &xc, &yc);

        long cnt(1);
        if(xa < xb && xa < xc){cnt += (xb < xc ? xb : xc) - xa;}
        else if(xa > xb && xa > xc){cnt += xa - (xb > xc ? xb : xc);}

        if(ya < yb && ya < yc){cnt += (yb < yc ? yb : yc) - ya;}
        else if(ya > yb && ya > yc){cnt += ya - (yb > yc ? yb : yc);}

        printf("%ld\n", cnt);
    }

}
