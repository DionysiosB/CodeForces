#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);

    long current(0), previous(0); scanf("%ld", &previous);
    long long total(0), count(1);
    --n;

    while(n--){
        scanf("%ld", &current);
        if(current == previous){++count;}
        else{total += count * (count + 1) / 2; count = 1;}
        previous = current;
    }
    total += count * (count + 1) / 2;

    printf("%lld\n", total);
    return 0;
}
