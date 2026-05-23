#include <cstdio>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    long *color = new long[n + 1];
    for(long k = 0; k <= n; k++){color[k] = 0;}

    for(long currentDance = 0; currentDance < m; currentDance++){
        long first(0), second(0), third(0); scanf("%ld %ld %ld", &first, &second, &third);
        if(color[first] > 0){       color[second] = 1 + color[first] % 3;  color[third]  = 1 + (1 + color[first] % 3) % 3;}
        else if(color[second] > 0){ color[first]  = 1 + color[second] % 3; color[third]  = 1 + (1 + color[second] % 3) % 3;}
        else if(color[third] > 0){  color[first]  = 1 + color[third] % 3;  color[second] = 1 + (1 + color[third] % 3) % 3;}
        else{color[first] = 1; color[second] = 2; color[third] = 3;}
    }

    for(long dancer = 1; dancer <= n; dancer++){printf("%ld ", color[dancer]);}
    printf("\n");
    return 0;
}
