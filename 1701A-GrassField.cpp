#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long cnt(0);
        for(int row = 0; row < 2; row++){
            for(int col = 0; col < 2; col++){
                long x; scanf("%ld", &x);
                cnt += x;
            }
        }

        long res(0);
        if(cnt == 4){res = 2;}
        else if(cnt > 0){res = 1;}

        printf("%ld\n", res);
    }

}
