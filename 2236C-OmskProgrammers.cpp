#include <cstdio>


long getmin(long a, long b, long x){
    if(a == b){return 0;}
    if(a > b){long x = a; a = b; b = x;}
    long diff = b - a;
    long div = 1 + getmin(a, b / x, x);
    return (diff < div ? diff : div);
}



int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, x; scanf("%ld %ld %ld", &a, &b, &x);
        long res = getmin(a, b, x);
        printf("%ld\n", res);
    }

}
