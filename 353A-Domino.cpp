#include <cstdio>

int main(){

    int n(0); scanf("%d\n", &n);

    int first(0), second(0);
    bool leftSide(0), rightSide(0), leftSum(0), rightSum(0), rotatable(0);
    while(n--){
        scanf("%d %d\n", &first , &second);
        leftSide = first % 2;
        rightSide = second % 2;
        
        leftSum  ^= leftSide;
        rightSum ^=  rightSide;

        if(leftSide ^ rightSide){rotatable = 1;}
    }
    
    if(!leftSum && !rightSum){puts("0");}
    else if(leftSum && rightSum && rotatable){puts("1");}
    else{puts("-1");}
}
