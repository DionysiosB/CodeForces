#include <cstdio>

int main(){

    long n, sx, sy; scanf("%ld %ld %ld", &n, &sx, &sy);

    long under(0), above(0), left(0), right(0);
    for(long p = 0; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        if(y < sy){++under;}
        else if(y > sy){++above;}
        if(x < sx){++left;}
        else if(x > sx){++right;}
    }

    if(under >= above && under >= left && under >= right){printf("%ld\n%ld %ld\n", under, sx, sy - 1);}
    else if(above >= under && above >= left && above >= right){printf("%ld\n%ld %ld\n", above, sx, sy + 1);}
    else if(left >= under && left >= above && left >= right){printf("%ld\n%ld %ld\n", left, sx - 1, sy);}
    else if(right >= under && right >= above && right >= left){printf("%ld\n%ld %ld\n", right, sx + 1, sy);}

    return 0;
}
