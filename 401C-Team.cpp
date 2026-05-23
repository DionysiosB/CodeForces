#include <cstdio>

int main(){

    long n(0), m(0); scanf("%ld %ld\n", &n, &m);

    if(m == n - 1 || m == n){
        for(int k = 0; k < m + n; k++){
            if(k % 2 == 0){printf("0");}
            else{printf("1");}
        }
    }
    else if(m >= (n + 1) && m <= 2 * (n + 1)){
        long t(0); if(m == 2 * (n + 1)){t = n + 1;} else{t = m % (n + 1);}
        if(m == n + 1){printf("1");} else{printf("11"); --t;}
        for(long k = 0; k < n; k++){
            if(t > 0){printf("011");} 
            else{printf("01");}
            --t;
        }
    }
    else{puts("-1");}

    return 0;
}
