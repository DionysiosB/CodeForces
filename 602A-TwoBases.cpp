#include <cstdio>
#include <iostream>

int main(){

    int n, bx; scanf("%d %d\n", &n, &bx);
    int64_t x(0);
    while(n--){int d; scanf("%d", &d); x = x * bx + d;}

    int m, by; scanf("%d %d\n", &m, &by);
    int64_t y(0);
    while(m--){int d; scanf("%d", &d); y = y * by + d;}

    if(x < y){puts("<");}
    else if(x > y){puts(">");}
    else{puts("=");}

    return 0;
}
