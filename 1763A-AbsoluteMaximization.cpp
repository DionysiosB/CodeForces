#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool a[11] = {0}; bool z[11] = {0};
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            for(long u = 0; u <= 10; u++){
                if(x % 2){a[u] = 1;}
                else if(x % 2 == 0){z[u] = 1;}
                x /= 2;
            }
        }

        long res(0), mult(1);
        for(long u = 0; u <= 10; mult *= 2, u++){res += mult * a[u] * z[u];}
        printf("%ld\n", res);
    }

}
