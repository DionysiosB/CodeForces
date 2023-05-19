#include <cstdio>
#include <vector>
 
int main(){
    
    long q; scanf("%ld", &q);
    while(q--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        long a = (x < y) ? x : y;
        long t = (x + y + z) / 3;
        a = (a < t) ? a : t;
        printf("%ld\n", a);
    }
    
    return 0;
}
