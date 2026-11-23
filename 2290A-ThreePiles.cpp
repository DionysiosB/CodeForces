#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        bool ans(false);
        if(a <= b && b <= c && b == a + 1 && c == b + 1){ans = true;}
        if(a <= c && c <= b && c == a + 1 && b == c + 1){ans = true;}
        if(b <= a && a <= c && a == b + 1 && c == a + 1){ans = true;}
        if(b <= c && c <= a && c == b + 1 && a == c + 1){ans = true;}
        if(c <= a && a <= b && a == c + 1 && b == a + 1){ans = true;}
        if(c <= b && b <= a && b == c + 1 && a == b + 1){ans = true;}
        puts(ans ? "YES" : "NO");
    }

}
