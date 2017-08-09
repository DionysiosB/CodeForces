#include <cstdio>

int main(){

    int a, b; scanf("%d %d\n", &a, &b);
    if(a <= 1 && b <= 1){puts("0");}
    else{printf("%d\n", a + b - 2 - ((a - b)%3 == 0));}

    return 0;
}
