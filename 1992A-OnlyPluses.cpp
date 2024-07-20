#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        for(long p = 0; p < 5; p++){
            if(a <= b && a <= c){++a;}
            else if(b <= a && b <= c){++b;}
            else if(c <= a && c <= b){++c;}
        }

        printf("%ld\n", a * b * c);
    }

}
