#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x; scanf("%ld", &x); 
        bool possible = (x == 1);
        for(long p = 1; p < n; p++){scanf("%ld", &x);}
        puts(possible ? "Yes" : "No");
    }

}
