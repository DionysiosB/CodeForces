#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, k; scanf("%ld %ld", &x, &k);
        if(x % k){printf("1\n%ld\n", x);}
        else{printf("2\n1 %ld\n", x - 1);}
    }

}
