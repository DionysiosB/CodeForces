#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);

    long manPower(0), untreated(0);

    while(n--){
        int input(0); scanf("%d", &input);
        if(input < 0){(manPower > 0) ? (--manPower) : (++untreated);}
        else{manPower += input;}
    }

    printf("%ld\n", untreated);

    return 0;
}
