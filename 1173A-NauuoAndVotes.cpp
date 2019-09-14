#include <cstdio>

int main(){

    long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
    if(x == y && z == 0){puts("0");}
    else if(x - y - z > 0){puts("+");}
    else if(x - y + z < 0){puts("-");}
    else{puts("?");}

    return 0;
}
