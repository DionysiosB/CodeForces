#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    long *value = new long[n];
    for(int k = 0; k < n; k++){scanf("%ld", value + k);}

    long output = 0, currentMax = - 30000000;
    for(int div = 1; div <= n / 3 ; div++){ // Minimum allowed triangle; If one or two vertices allowed, upper bound should be equal to n
        if(n % div != 0){continue;}
        for(int rem = 0; rem < div; rem++){
            output = 0;
            for(int k = 0; k < n / div; k++){output += value[div * k + rem];}
            if(output > currentMax){currentMax = output;}
        }
    }

    printf("%ld\n", currentMax);
    return 0;
}
