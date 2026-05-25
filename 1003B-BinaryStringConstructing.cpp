#include <cstdio>

int main(){

    long d[2], x; scanf("%ld %ld %ld", d, d + 1, &x);
    int flag(d[1] >= d[0] ? 0 : 1);
    while(x > 0){flag = 1 - flag; printf("%d", flag); --x; --d[flag];}
    while(d[flag]){printf("%d", flag); --d[flag];}
    flag = 1 - flag;
    while(d[flag]){printf("%d", flag); --d[flag];}
    puts("");

    return 0;
}
