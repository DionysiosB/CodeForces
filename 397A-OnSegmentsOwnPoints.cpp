#include <cstdio>

int main(){

    const int N = 100;
    bool free[N] = {0};

    int n(0); scanf("%d", &n);
    int left(0), right(0); scanf("%d %d", &left, &right);
    for(int k = left; k < right; k++){free[k] = 1;}

    while(--n){
        int L(0), R(0); scanf("%d %d", &L, &R);
        int leftBound = (L < left) ? left : L;
        int rightBound = (right < R) ? right : R;
        for(int k = leftBound; k < rightBound; k++){free[k] = 0;}

    }
    
    int total(0); for(int k = left; k < right; k++){total += free[k];}
    printf("%d\n", total);

    return 0;
}
