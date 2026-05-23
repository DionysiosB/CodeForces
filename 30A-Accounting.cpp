#include <cstdio>
#include <cmath>


int main(){

    long A(0), B(0), n(0); scanf("%ld %ld %ld", &A, &B, &n);

    bool possible(1);
    int X(0);

    if(A == 0 && B == 0){puts("1");}
    else if(A == 0 && B != 0){puts("No solution");}
    else if(A != 0 && B == 0){puts("0");}
    else if(B % A != 0){puts("No solution");}
    else if(A * B < 0 && (n % 2 == 0)){puts("No solution");}
    else{
        int outputSign = 2 * (A * B > 0) - 1; 
        int sol = outputSign * pow(1.0 * outputSign * B / A, 1.0 / n);

        int lhs(A), lhsP(A), lhsN(A);
        for(int k = 0; k < n; k++){lhs *= sol; lhsP *= (sol + 1); lhsN *= (sol - 1);}

        if(lhs == B){printf("%d\n", sol);}
        else if(lhsP == B){printf("%d\n", sol + 1);}
        else if(lhsN == B){printf("%d\n", sol - 1);}
        else{puts("No solution");}
    }

    return 0;
}
