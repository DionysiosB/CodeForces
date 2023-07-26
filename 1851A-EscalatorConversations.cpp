#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k, H; scanf("%ld %ld %ld %ld", &n, &m, &k, &H);
        long cnt(0);
        for(long p = 0; p < n; p++){
            long u; scanf("%ld", &u);
            long diff = H - u;
            if(!diff || diff % k){continue;} 
            if(diff < 0){diff = -diff;}
            //if(diff < m * k){printf("**ADD: H=%ld u=%ld k=%ld m=%ld\n", H, u, k, m);}
            cnt += (diff < m * k);
        }

        printf("%ld\n", cnt);
    }

}
