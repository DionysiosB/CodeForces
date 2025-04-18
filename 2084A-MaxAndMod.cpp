#include <cstdio>
#include <vector>
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2 == 0){puts("-1"); continue;}
        printf("%ld ", n);
        for(long p = 1; p < n; p++){printf("%ld ", p);}
        puts("");
    }
 
}
