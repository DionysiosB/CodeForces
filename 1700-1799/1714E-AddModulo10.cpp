#include <cstdio>

long getnext(long x){return x + (x % 10);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);

        bool z(false), two(false), twelve(false);
        long mn(1e9), mx(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            while( (x % 10 != 0) && (x % 10 != 2) ){x = getnext(x);}
            if(x % 10 == 0){z = true;}
            else if(x % 20 == 2){two = true;}
            else{twelve = true;}
            mn = (mn < x ? mn : x);
            mx = (mx > x ? mx : x);
        }

        bool possible = (z && mn == mx && !two && !twelve) || (!z && two && !twelve) ||(!z && !two && twelve);
        puts(possible ? "YES" : "NO");
    }

}
