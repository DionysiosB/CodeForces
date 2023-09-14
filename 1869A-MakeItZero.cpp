#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x);}
        if(n % 2){printf("4\n2 %ld\n2 %ld\n1 2\n1 2\n", n, n);}
        else{printf("2\n1 %ld\n1 %ld\n", n, n);}
    }

}
