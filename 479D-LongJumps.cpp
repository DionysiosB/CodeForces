#include <cstdio>
#include <set>

int main(){

    long n, len, x, y; scanf("%ld %ld %ld %ld\n", &n, &len, &x, &y);
    std::set<long> marks;
    bool fx(0), fy(0), fxy(0); long d;

    while(n--){
        long a; scanf("%ld", &a);
        marks.insert(a);
        if(x <= a && marks.count(a - x)){fx = 1;}
        if(y <= a && marks.count(a - y)){fy = 1;}
        if(x + y <= a && marks.count(a - x - y)){fxy = 1; d = a - y;}
        if(y <= a && marks.count(a + x - y)){fxy = 1; d = a - y;}
        if(a + x <= len && marks.count(a + x - y)){fxy = 1; d = a + x;}
    }

    if(fx && fy){puts("0");}
    else if(fx){printf("1\n%ld\n", y);}
    else if(fy){printf("1\n%ld\n", x);}
    else if(fxy){printf("1\n%ld\n", d);}
    else {printf("2\n%ld %ld\n", x, y);}

    return 0;
}
