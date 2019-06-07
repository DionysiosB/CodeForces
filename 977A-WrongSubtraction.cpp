#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    while(k--){
        if(n % 10 > 0){--n;}
        else{n /= 10;}
    }

    printf("%ld\n", n);

    return 0;
}
