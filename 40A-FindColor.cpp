#include <cstdio>
#include <cmath>

int main(){
    
    long x, y; scanf("%ld %ld\n", &x, &y);
    double actual = x * x + y * y;
    long total = sqrt(actual);
    if(total * total == actual){puts("black");}
    else{
        if(x * y < 0){++total;}
        puts(total % 2 ? "white" : "black");
    }

    return 0;
}
