#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);

    long output = 0;
    for(long p = 0; p < n; p++){
        long height; scanf("%ld", &height);
        output = (output > height) ? output : height;
    }

    printf("%ld\n", output);

    return 0;
}
