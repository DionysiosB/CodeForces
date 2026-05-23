#include <cstdio>
#include <iostream>

int main(){

    int p1(0), p2(0), p3(0), p4(0), a(0), b(0);
    scanf("%d %d %d %d %d %d", &p1, &p2, &p3, &p4, &a, &b);

    int minP = std::min(p1, std::min(p2, std::min(p3, p4)));
    
    int output(0);
    if(a <= minP && minP <= b){output = minP - a;}
    else if (minP > b){output = b - a + 1;}

    printf("%d\n", output);
    return 0;
}
