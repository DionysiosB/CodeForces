#include <cstdio>

int main(){

    long x1, x2, a, b; scanf("%ld %ld %ld %ld\n", &x1, &x2, &a, &b);
    long d = x2 - x1;
    int dir = 1;

    if(a <= 0 && b <= 0){long temp = a; a = -b; b = -temp; d = -d; dir = -1;}
    if(a <= 0){ //a and b have different signs
        if(d < a || d > b){puts("DRAW");} //First cannot win in the first move;
        else{printf("FIRST\n%ld\n", x2);}  //First wins in the first move by moving to x2;
    }
    else{ //a and b are now both positive
        if(d < 0){puts("DRAW");}
        else if (d % (a + b) == 0){puts("SECOND");}
        else if (d % (a + b) < a || d % (a + b) > b){puts("DRAW");}
        else{printf("FIRST\n%ld\n", x2 - dir * (d / (a + b)) * (a + b));}
    }
    
    return 0;
}
