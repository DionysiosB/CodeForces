#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 1){puts("1"); continue;}
        else if(n == 2){puts("-1"); continue;}
        std::vector<std::vector<long> > res(n, std::vector<long>(n, 0));
        long cur(1);
        for(long par = 0; par <= 1; par++){
            for(long row = 0; row < n; row++){
                for(long col = 0; col < n; col++){
                    if((row + col) % 2 == par){res[row][col] = cur++;}
                }
            }
        }

        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){printf("%ld ", res[row][col]);}
            puts("");
        }
    }

}
