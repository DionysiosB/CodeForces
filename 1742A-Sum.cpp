#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        bool res = (a + b == c) || (a + c == b) || (b + c == a);
        puts(res ? "YES" : "NO");
    }   

}
