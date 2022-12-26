#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    long odd(1), even(2);
    for(long row = 0; row < n; row++){
        long diff = (n / 2) - row; 
        if(diff < 0){diff = -diff;}
        for(long col = 0; col < n; col++){
            if(col < diff || col >= n - diff){printf("%ld ", even); even += 2;}
            else{printf("%ld ", odd); odd += 2;}
        }
        puts("");
    }

    return 0;
}
