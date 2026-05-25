#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(n), a(0), b(0);
        while(s % 2 == 0){++a; s /= 2;}
        while(s % 3 == 0){++b; s /= 3;}
        if(s != 1 || b < a){puts("-1");}
        else{printf("%ld\n", 2 * b - a);}
    }

    return 0;
}
