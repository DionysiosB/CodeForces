#include <cstdio>

int main(){

    long a, x, y; scanf("%ld %ld %ld", &a, &x, &y);
    if(0 < x && x < a && 0 < y && y < a){puts("0");}
    else if(0 <= x && x <= a && 0 <= y && y <= a){puts("1");}
    else{puts("2");}

    return 0;
}
