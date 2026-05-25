#include <cstdio>

int main(){


    long x; scanf("%ld", &x);
    if(x % 4 == 0){puts("1 A");}
    else if(x % 4 == 1){puts("0 A");}
    else if(x % 4 == 2){puts("1 B");}
    else if(x % 4 == 3){puts("2 A");}

    return 0;
}
