#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        if((b % 3) && ((b % 3) + c < 3) ){puts("-1"); continue;}
        printf("%ld\n", a + (b + c + 2) / 3);
    }

}
