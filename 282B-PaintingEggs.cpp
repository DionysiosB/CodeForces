#include <cstdio>

int main(){
    //Prove by induction that at each step the difference can not be more than 500
    //First step by choosing min(first, second) and then induction step
    const int Max = 1000; const int halfMax = Max / 2;
    long n; scanf("%ld", &n);
    
    int diff(0), first(0), second(0);
    for(long k = 0; k < n; k++){
        scanf("%d %d", &first, &second);
        if(diff + first <= halfMax){diff += first; printf("A");}
        else{diff -= second; printf("G");}
    }
    printf("\n");
    return 0;
}
