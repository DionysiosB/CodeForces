#include <cstdio>

int main(){

    int N(0); scanf("%d\n", &N);
    long currentXor(0), maxXor(0);
    long *array = new long[N];
    for(int k = 0; k < N; k++){scanf("%ld", array + k);}

    for(int first = 0; first < N; first++){
        currentXor = array[first];
        if(currentXor > maxXor){maxXor = currentXor;}
        for(int second = first + 1; second < N; second++){
            currentXor ^= array[second];
            if(currentXor > maxXor){maxXor = currentXor;}
        }
    }

    printf("%ld\n", maxXor);
    return 0;
}
