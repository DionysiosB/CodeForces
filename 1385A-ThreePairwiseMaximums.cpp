#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        if(x == y && x >= z){printf("YES\n%ld %ld %ld\n", x, z, z);}
        else if(x == z && z >= y){printf("YES\n%ld %ld %ld\n", x, y, y);}
        else if(y == z && y >= x){printf("YES\n%ld %ld %ld\n", y, x, x);}
        else{puts("NO");}
    }

    return 0;
}
