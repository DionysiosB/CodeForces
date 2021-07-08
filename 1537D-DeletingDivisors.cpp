#include <cstdio>

int main(){


    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2){puts("Bob"); continue;}

        long cnt(0);
        while(n % 2 == 0){n /= 2; ++cnt;}
        if(n > 1){puts("Alice");}
        else if(cnt % 2){puts("Bob");}
        else{puts("Alice");}
    }

}
