#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long left(1), right(3 * n);
        for(long p = 0; p < 3 * n; p++){
            if(p % 3){printf("%ld ", right--);}
            else{printf("%ld ", left++);}
        }

        puts("");
    }

}
