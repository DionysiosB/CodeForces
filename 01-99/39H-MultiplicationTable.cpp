#include <cstdio>

int main(){

    int k; scanf("%d", &k);
    for(long row = 1; row < k; row++){
        for(long col = 1; col < k; col++){
            long prod = row * col;
            if(prod >= k){prod = 10 * (prod / k) + (prod % k);}
            printf("%ld ", prod);
        }
        puts("");
    }

    return 0;
}
