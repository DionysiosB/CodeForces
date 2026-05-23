#include <cstdio>

int main(){

    long first(0), second(0), third(0);
    scanf("%ld %ld %ld\n", &first, &second, &third);
    bool possible(0);
    for(long k = 0; k <= first; k++){
        if(k <= second && k >= first - third && second - k == third - (first - k)){
            possible = 1;
            printf("%ld %ld %ld\n", k ,second - k, first - k); 
            break;
        }
    }
    if(!possible){puts("Impossible");}

    return 0;
}
