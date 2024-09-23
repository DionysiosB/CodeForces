#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, q; scanf("%ld %ld %ld", &n, &m, &q);
        long bl, br; scanf("%ld %ld", &bl, &br);
        long a; scanf("%ld", &a);
        if(bl > br){long tmp = bl; bl = br; br = tmp;}
        long res(0);
        if(a < bl){res = bl - 1;}
        else if(bl < a && a < br){res = (br - bl) / 2;}
        else if(br < a){res = n - br;}
        printf("%ld\n", res);
    }

}
