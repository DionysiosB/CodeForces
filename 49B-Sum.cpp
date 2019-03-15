#include <cstdio>

bool check(long a, long b, long r){
    while(a > 0){if(a % 10 >= r){return false;}; a /= 10;}
    while(b > 0){if(b % 10 >= r){return false;}; b /= 10;}
    return true;
}

long getSumLength(long a, long b, long r){

    long sum(0);
    long mult(1); while(a > 0){sum += mult * (a % 10); mult *= r; a /= 10;}
    mult = 1; while(b > 0){sum += mult * (b % 10); mult *= r; b /= 10;}

    long len(0);
    while(sum > 0){sum /= r; ++len;}
    return len;
}

int main(){

    const long N = 1000;
    long a, b; scanf("%ld %ld", &a, &b);
    long maxLength(0);
    for(long r = 2; r <= N; r++){
        if(!check(a, b, r)){continue;}
        long length = getSumLength(a, b, r);
        maxLength = (maxLength > length) ? maxLength : length;
    }

    printf("%ld\n", maxLength);

    return 0;
}
