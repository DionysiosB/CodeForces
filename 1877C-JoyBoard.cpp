#include <cstdio>

int main(){
    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        long res(0);
        if(k > 3){res = 0;}
        else if(k == 1){res = 1;}
        else if(k == 2){res = (m < (m / n + n - 1) ? m : (m/n + n - 1));}
        else{res = m - (m /n) - n + 1; res = res > 0 ? res : 0;}
        printf("%ld\n", res);
    }

}
