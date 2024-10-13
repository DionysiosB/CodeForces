#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool possible(true);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < 0){possible = false;}
        }

        if(possible){puts("YES\n101"); for(long p = 0; p <= 100; p++){printf("%ld ", p);} puts("");}
        else{puts("NO");}
    }

}
