#include <cstdio>
 
int main(){

    //The answer is to have the cumulative XOR at position p equal to p
    //Except for position r, where it should be equal to (l - 1)
    //At the (r + 1) element, we need to restore the pattern
    long t; scanf("%ld", &t);
    while(t--){
       long n, l, r; scanf("%ld %ld %ld", &n, &l, &r);
       for(long p = 1; p <= n; p++){
           long f = (p - 1) ^ p;
           if(p == r){f = (l - 1) ^ (r - 1);}
           else if(p == r + 1){f = (l - 1) ^ p;}
           printf("%ld ", f);
        }
       puts("");
    }
    
}
