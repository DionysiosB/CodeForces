#include <cstdio>

int main(){
    
    const int N = 10;
    long quantity[N] = {0};
    long occurence[N] = {0};


    long paint(0); scanf("%ld", &paint);
    long minQuantity(1e6), minDigit(0);

    for(int k = 1; k < N; k++){
        scanf("%ld", quantity + k);
        if(quantity[k] <= minQuantity){minQuantity = quantity[k]; minDigit = k;}
    }

    if(paint > minQuantity){

        occurence[minDigit] = paint / quantity[minDigit];
        paint %= quantity[minDigit];

        int remDigit(9);
        while(paint > 0 && remDigit > minDigit){
            long currentDiff = quantity[remDigit] - quantity[minDigit];
            occurence[remDigit] += paint / currentDiff;
            occurence[minDigit] -= paint / currentDiff;
            paint %= currentDiff;
            remDigit--;
        }

        
        for(int digit = N - 1; digit >= minDigit; digit--){
            for(int m = 0; m < occurence[digit]; m++){
                printf("%d", digit);
            }
        }
        puts("");
    }

    else{puts("-1");}

    return 0;
}
