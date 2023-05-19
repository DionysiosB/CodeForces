#include <cstdio>

bool check(long x){

    if(x == 0){return true;}
    long d[10] = {0};
    while(x){
        long lsb = x % 10;
        if(d[lsb]){return false;}
        d[lsb] = 1;
        x /= 10;
    }

    return true;
}

int main(){

    long left, right; scanf("%ld %ld", &left, &right);
    long ans(-1);
    for(long x = left; x <= right; x++){if(check(x)){ans = x; break;}}
    printf("%ld\n", ans);

    return 0;
}
