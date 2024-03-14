#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long start(-1), z(0), cnt(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(x){
                if(start < 0){start = p;}
                cnt += z;
                z = 0;
            }
            else if(start >= 0){++z;}
        }

        printf("%ld\n", cnt);
    }

}
