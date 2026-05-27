#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mxa(0); while(n--){long x; scanf("%ld", &x); mxa = (mxa > x) ? mxa : x;}
        long m; scanf("%ld", &m);
        long mxb(0); while(m--){long x; scanf("%ld", &x); mxb = (mxb > x) ? mxb : x;}

        if(mxa > mxb){puts("Alice\nAlice");}
        else if(mxa < mxb){puts("Bob\nBob");}
        else{puts("Alice\nBob");}
    }

}
