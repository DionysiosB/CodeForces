#include <cstdio>
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        if(a > b){long x = a; a = b; b = x;}
        long side = (2 * a > b) ? (2 * a) : b;
        printf("%ld\n", side * side);
    }
 
    return 0;
}
