#include <cstdio>


long computeXOR(long n){

    if(n % 4 == 0){return n;}
    else if(n % 4 == 1){return 1;}
    else if(n % 4 == 2){return n + 1;}
    return 0;
}


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long x = computeXOR(a - 1);
        long res(a + 2);
        if(x == b){res = a;}
        else if((x ^ b) != a){res = a + 1;}
        printf("%ld\n", res);
    }

}
