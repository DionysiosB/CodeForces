#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    long a(0), b(0), x1(0), y1(0), x2(0), y2(0);
    scanf("%ld %ld %ld %ld %ld %ld", &a, &b, &x1, &y1, &x2, &y2);

    long xA = x1 + y1;
    long yA = x1 - y1;

    long xB = x2 + y2;
    long yB = x2 - y2;


    long diffX = std::abs(xA / (2 * a) - xB / (2 * a) + (xA > 0) - (xB > 0));
    long diffY = std::abs(yA / (2 * b) - yB / (2 * b) + (yA > 0) - (yB > 0));
    long maxDiff = std::max(diffX, diffY);

    printf("%ld\n", maxDiff);

    return 0;
}
