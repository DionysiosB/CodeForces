#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0); while(n--){long x; scanf("%ld", &x); s += x - 1;}
        puts(s % 2 ? "errorgorn" : "maomao90");
    }

}
