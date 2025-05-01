#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long r; scanf("%ld", &r);
        int res(1);
        if(r <= 1399){res = 4;}
        else if(r <= 1599){res = 3;}
        else if(r <= 1899){res = 2;}
        else if(1900 <= r){res = 1;}
        printf("Division %d\n", res);
    }

}
