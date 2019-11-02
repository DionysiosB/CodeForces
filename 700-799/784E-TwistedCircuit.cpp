#include<cstdio>

int main(){
    int a,b,c,d; scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d",( (a^b) & (c|d) ^ ((b&c) | (a^d))));

    return 0;
}
