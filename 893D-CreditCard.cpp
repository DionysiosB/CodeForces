#include <cstdio>

int main(){

    long n, d; scanf("%ld %ld", &n, &d); 
    long mn(0), mx(0), count(0);
    bool possible(true);
    while(n--){
        long x; scanf("%ld", &x);

        if(x == 0){
            if(mx >= 0){mn = (mn > 0) ? mn : 0;}
            else{++count; mn = 0; mx = d;}
        }
        else{
            mn += x; mx += x;
            if(mn > d){possible = false; break;}
            mx = (mx < d) ? mx : d;
        }
    }

    printf("%ld\n", possible ? count : -1);

    return 0;
}
