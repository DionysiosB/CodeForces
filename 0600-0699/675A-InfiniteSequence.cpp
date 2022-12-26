#include <cstdio>

int sgn(long x){
    if(x > 0){return 1;}
    else if(x < 0){return -1;}
    return 0;
}

int main(){

    long a, b, c; scanf("%ld %ld %ld\n", &a, &b, &c);
    if(a == b && c == 0){puts("YES"); return 0;}
    puts((a == b || (sgn(b - a) == sgn(c) && (b - a) % c == 0)) ? "YES" : "NO");

    return 0;
}
