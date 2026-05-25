#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long ones(false), done(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x > 1){done = true;}
            else if(!done){ones = 1 - ones;}
        }

        if(!done){ones = 1 - ones;}
        puts(ones ? "Second" : "First");

    }

    return 0;
}
