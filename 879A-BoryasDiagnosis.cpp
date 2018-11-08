#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long t(0);
    for(long p = 0; p < n; p++){
        long s, d; scanf("%ld %ld", &s, &d);
        if(t < s){t = s;}
        else{t = d * ((t - s) / d + 1) + s;}
    }

    printf("%ld\n", t);

    return 0;
}
