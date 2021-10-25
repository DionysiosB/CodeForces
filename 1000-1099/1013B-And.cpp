#include <cstdio>
#include <set>

int main(){

    long n, x; scanf("%ld %ld", &n, &x);
    std::set<long> sa, sx;
    int num(3);

    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        if(sa.count(a)){num = 0; break;}
        if(sx.count(a)){num = 1;}
        else if(sa.count(a & x)){num = 1;}
        else if(sx.count(a & x)){num = (num < 2) ? num : 2;}
        sa.insert(a); sx.insert(a & x);
    }

    if(num > 2){puts("-1");}
    else{printf("%d\n", num);}

    return 0;
}
