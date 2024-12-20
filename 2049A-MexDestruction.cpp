#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0); bool prev(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x){s += !prev; prev = 1;}
            else{s += prev; prev = 0;}
        }
        
        if(s == 0){puts("0");}
        else if(s <= 2){puts("1");}
        else{puts("2");}
    }
    
}
