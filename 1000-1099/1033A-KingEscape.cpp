#include <cstdio>

int main(){


    long n; scanf("%ld", &n);
    long ax, ay, bx, by, cx, cy; scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy);

    bool possible = true;
    if(bx < ax && ax < cx){possible = false;}
    if(cx < ax && ax < bx){possible = false;}

    if(by < ay && ay < cy){possible = false;}
    if(cy < ay && ay < by){possible = false;}

    puts(possible ? "YES" : "NO");

    return 0;
}
