#include<cstdio>

bool check(int A, int B, int a, int b, int c){return A == B && ((a <= c && b <= c) || (a >= c && b >= c));}

int main(){

    long x1, y1, x2, y2, x3, y3; scanf("%ld %ld %ld %ld %ld %ld", &x1, &y1, &x2, &y2, &x3, &y3);

    if((x1 == x2 && x2 == x3) || (y1 == y2 && y2 == y3)){puts("1");}
    else if(check(x1, x2, y1, y2, y3) || check(x1, x3, y1, y3, y2) || check(x2, x3, y2, y3, y1)){puts("2");}
    else if(check(y1, y2, x1, x2, x3) || check(y1, y3, x1, x3, x2) || check(y2, y3, x2, x3, x1)){puts("2");}
    else puts("3");
    return 0;
}
