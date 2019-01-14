#include <cstdio>

int main(){
    
    long n; scanf("%ld", &n);
    long pos(0), neg(0);
    while(n--){
        long x, y; scanf("%ld %ld", &x, &y);
        pos += (x > 0);
        neg += (x < 0);
    }
    
    puts((pos <= 1 || neg <= 1) ? "Yes" : "No");
    
    return 0;
}
