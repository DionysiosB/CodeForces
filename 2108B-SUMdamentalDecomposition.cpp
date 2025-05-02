#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long b(0), y(x);
        while(y){b += (y % 2); y /= 2;}

        long ans(0);
        if(n <= b){ans = x;}
        else if( (n - b) % 2 == 0){ans = x + n - b;}
        else{
            if(x == 0){ans = (n == 1 ? -1 : (n + 3));}
            else if(x == 1){ans = n + 3;}
            else{ans = x + n - b + 1;}
        }

        printf("%ld\n", ans);
    }

}
