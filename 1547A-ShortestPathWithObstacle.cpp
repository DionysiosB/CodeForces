#include <cstdio>

int main(){

    long t; scanf("%ld\n", &t);
    while(t--){
        long xa, ya, xb, yb, xf, yf;
        scanf("%ld %ld\n", &xa, &ya);
        scanf("%ld %ld\n", &xb, &yb);
        scanf("%ld %ld\n", &xf, &yf);

        long dx = xa - xb; if(dx < 0){dx = -dx;}
        long dy = ya - yb; if(dy < 0){dy = -dy;}
        long res = dx + dy;
        if(ya == yb && ya == yf &&  ((xa < xf && xf < xb) || (xb < xf && xf < xa))){res += 2;}
        else if(xa == xb && xa == xf && ((ya < yf && yf < yb) || (yb < yf && yf < ya))){res += 2;}
        printf("%ld\n", res);
    }

}
