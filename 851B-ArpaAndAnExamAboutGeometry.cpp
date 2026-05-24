#include <cstdio>

int main(){

    long long ax, ay, bx, by, cx, cy; scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);
    bool possible = true;
    if((bx - ax) * (bx - ax) + (by - ay) * (by - ay) != (cx - bx) * (cx - bx) + (cy - by) * (cy - by)){possible = false;}
    if( ((bx - ax) * (cy - ay) == (cx - ax) * (by - ay)) || ((bx - ax) * (cy - ay) == -(cx - ax) * (by - ay))){possible = false;}
    puts(possible ? "Yes" : "No");

    return 0;
}
