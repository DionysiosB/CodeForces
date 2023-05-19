#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long pos(0), prev(-1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(pos){continue;}
            if((prev >= 0) && ((x > prev + 1) || (x < prev - 1))){pos = p;}
            prev = x; 
        }

        puts(pos ? "YES" : "NO");
        if(pos){printf("%ld %ld\n", pos, pos + 1);}
    }

    return 0;
}
