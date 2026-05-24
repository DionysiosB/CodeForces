#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long singles(0), pairs(0);
    while(n--){int x; scanf("%d", &x); if(x == 1){++singles;} else{++pairs;}}
    long triplets(0);
    if(pairs > singles){triplets = (pairs < singles) ? pairs : singles;}
    else{triplets = pairs + (singles - pairs) / 3;}

    printf("%ld\n", triplets);

    return 0;
}
