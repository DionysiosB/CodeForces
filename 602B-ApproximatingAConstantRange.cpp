#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    long down(1), up(1), range(0);

    long prev; scanf("%ld", &prev);

    while(--n){
        long current; scanf("%ld", &current);
        if(current > prev){up = down + 1; down = 1;}
        else if(current < prev){down = up + 1; up = 1;}
        else{++down; ++up;}
        prev = current;
        if(down > range || up > range){range = (down < up) ? up : down;}
    }

    printf("%ld\n", range);

    return 0;
}
