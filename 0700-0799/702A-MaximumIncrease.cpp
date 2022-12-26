#include<cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    long best(0), current(0), last(0);
    while(n--){
        long x; scanf("%ld", &x);
        if(x > last){++current;} else{current = 1;}
        last = x;
        best = (current > best) ? current : best;
    }

    printf("%ld\n", best);

    return 0;
}
