#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        long x, y, x1, y1, x2, y2; scanf("%ld %ld %ld %ld %ld %ld", &x, &y, &x1, &y1, &x2, &y2);

        bool ans(true);
        x += (b - a);
        if(x < x1 || x > x2){ans = false;}
        if(a == b && x1 == x2 && a > 0){ans = false;}

        y += (d - c);
        if(y < y1 || y > y2){ans = false;}
        if(c == d && y1 == y2 && c > 0){ans = false;}

        puts(ans ? "Yes" : "No");
    }

    return 0;
}
