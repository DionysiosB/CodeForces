#include <cstdio>
#include <vector>

long getMinFactor(long input){
    while(input != 0 && input % 2 == 0){input /= 2;}
    while(input != 0 && input % 3 == 0){input /= 3;}
    return input;
}

int main(){

    long n; scanf("%ld\n", &n);
    long minFactor = 0;
    bool possible(1);
    for(long p = 0; p < n; p++){
        long current; scanf("%ld", &current);
        long currentFactor = getMinFactor(current);
        if(minFactor == 0){minFactor = currentFactor;}
        else if(currentFactor != minFactor){possible = 0; break;}
    }

    puts(possible ? "Yes" : "No");
    return 0;
}
