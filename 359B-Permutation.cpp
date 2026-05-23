#include <cstdio>

int main(){
    
    long n(0), k(0); scanf("%ld %ld", &n, &k);
    
    for(long p = 0; p < n; p++){
        if(p < k){printf("%ld %ld ", 2*p + 2, 2*p + 1);}
        else{printf("%ld %ld ", 2*p + 1, 2*p + 2);}
    }
    return 0;
}
