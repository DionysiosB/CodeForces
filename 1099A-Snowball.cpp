#include <cstdio>

int main(){

    long w, h; scanf("%ld %ld", &w, &h);
    long u1, d1; scanf("%ld %ld", &u1, &d1);
    long u2, d2; scanf("%ld %ld", &u2, &d2);

    ++h;
    while(h--){
        w += h; 
        if(h == d1){w -= u1;}
        if(h == d2){w -= u2;}
        if(w < 0){w = 0;}
    }

    printf("%ld\n", w);

    return 0;
}
