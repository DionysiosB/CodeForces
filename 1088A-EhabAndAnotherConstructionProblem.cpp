#include <cstdio>

int main(){

    long x; scanf("%ld", &x);
    bool done(false);
    long a(-1), b(-1);
    for(long p = 2; p <= x; p++){
        if(done){break;}
        for(long k = 1; k < x; k++){
            if(k * p * p > x){done = true; a = k * p; b = p; break;}
        }
    }

    if(a > 0){printf("%ld %ld\n", a, b);}
    else{puts("-1");}

    return 0;
}
