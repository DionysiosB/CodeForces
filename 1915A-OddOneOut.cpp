#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        if(a == b){printf("%ld\n", c);}
        else if(a == c){printf("%ld\n", b);}
        else if(b == c){printf("%ld\n", a);}
    }

}
