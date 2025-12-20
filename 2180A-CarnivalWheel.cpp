#include <cstdio>
 
int main(){
    
    const long B = 5007;
    long t; scanf("%ld", &t);
    while(t--){
        long l, a, b; scanf("%ld %ld %ld", &l, &a, &b);
        bool v[B] = {0};
        
        long x(a), mx(-1);
        for(long p = 0; p <= l; p++){
            if(v[x]){break;}
            mx = (mx > x ? mx : x);
            x = (x + b) % l;
        }
        
        printf("%ld\n", mx);
    }
    
}
