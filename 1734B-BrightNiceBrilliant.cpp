#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long row = 0; row < n; row++){
            for(long col = 0; col <= row; col++){printf("%d ", col == 0 || col == row);}
            puts("");
        }

    }

}
