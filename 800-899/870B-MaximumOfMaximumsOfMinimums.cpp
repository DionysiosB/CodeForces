#include <cstdio>

int main(){
    
    long n, k; scanf("%ld %ld", &n, &k);
    long min(2e9), max(-2e9), first(0), last(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        if(p == 0){first = x;}
        else if(p == n - 1){last = x;}
        min = (min < x) ? min : x;
        max = (max > x) ? max : x;
    }
    
    if(k == 1){printf("%ld\n", min);}
    else if(k == 2){printf("%ld\n", (first > last) ? first : last);}
    else{printf("%ld\n", max);}
    
    return 0;
}
