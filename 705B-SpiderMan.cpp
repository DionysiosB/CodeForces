#include <cstdio>

int main(){
    
    long n; scanf("%ld\n", &n);
    long mod(0);
    
    while(n--){
        long a; scanf("%ld", &a);
        mod += (a - 1); mod %= 2;
        puts((mod > 0) ? "1" : "2");
    }
    
    return 0;
}
