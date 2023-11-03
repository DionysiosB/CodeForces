#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool possible(true);
        long a; scanf("%ld", &a);
        long cnta(1), b(0), cntb(0);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == a){++cnta;}
            else if(cntb == 0){b = x; cntb = 1;}
            else if(x == b){++cntb;}
            else{possible = false;}
        }

        if(cntb > 0){
            if(cnta > cntb + 1){possible = false;}
            if(cntb > cnta + 1){possible = false;}
        }

        puts(possible ? "Yes" : "No");
    }

}
