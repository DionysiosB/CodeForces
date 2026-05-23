#include <cstdio>

int main(){
    
    long n(0), m(0); scanf("%ld %ld", &n, &m);
    long current(0), last(1);
    long long total(0);
    for(int k = 0; k < m; k++){
        scanf("%ld", &current);
        total += current - last;
        if(current < last){total += n;}
        last = current;
    }

    printf("%lld\n", total);
    return 0;
}
