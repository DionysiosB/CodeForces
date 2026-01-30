#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, s, x; scanf("%ld %ld %ld", &n, &s, &x);
        while(n--){long a; scanf("%ld", &a); s -= a;}
        puts( (s >= 0 && s % x == 0) ? "YES" : "NO");
    }
    
}
