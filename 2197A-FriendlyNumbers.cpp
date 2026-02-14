#include <cstdio>

long digitSum(long x){
    long cnt(0);
    while(x){cnt += (x % 10); x /= 10;}
    return cnt;
}

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        long cnt(0);
        for(long y = x + 1; y <= x + 100; y++){cnt += (y == x + digitSum(y));}
        printf("%ld\n", cnt);
    }
    
}
