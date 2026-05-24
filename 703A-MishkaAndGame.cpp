#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    long long sumX(0), sumY(0);
    while(n--){
        long x, y; scanf("%ld %ld\n", &x, &y);
        if(x > y){++sumX;}
        else if(x < y){++sumY;}
    }


    if(sumX > sumY){puts("Mishka");}
    else if(sumX < sumY){puts("Chris");}
    else if(sumX == sumY){puts("Friendship is magic!^^");}

    return 0;
}
