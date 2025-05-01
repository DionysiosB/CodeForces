#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        if(x == 1){puts("3");}
        else if(x % 2){puts("1");}
        else{
            long res(1);
            while(x % 2 == 0){x /= 2; res *= 2;}
            printf("%ld\n", res + (x == 1));
        }
    }

}
