#include <cstdio>

int main(){

    long t; scanf("%ld", &t); 
    while(t--){
        long n; scanf("%ld", &n);
        long pos(0), neg(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            pos += (x > 0);
            neg += (x < 0);
        }

        long move(0);
        if(pos < neg){
            move = (neg - pos + 1) / 2; 
            pos += move; neg -= move;
        }
        if(neg % 2){++move;}

        printf("%ld\n", move);
    }

}
