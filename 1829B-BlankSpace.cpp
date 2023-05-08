#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cur(0), mx(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(x){cur = 0; continue;}
            ++cur; mx = (mx > cur) ? mx : cur;
        }

        printf("%ld\n", mx);
    }

}
