#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        bool res(false);
        if(a == b + c || b == a + c || c == a + b){res = true;}
        if((a % 2 == 0 && b == c) || (b % 2 == 0 && a == c) || (c % 2 == 0 && a == b)){res = true;}
        puts(res ? "YES" : "NO");
    }

}
