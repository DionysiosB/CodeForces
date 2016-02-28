#include <cstdio>
#include <vector>

int main(){
    
    long n; scanf("%ld\n", &n);
    if((n / 2) % 2){puts("-1");}
    else{
        std::vector<long> array(n + 1, 0);
        for(long p = 1; p <= n /2; p += 2){
            array[p] = p + 1;
            array[p + 1] = n - p + 1;
            array[n - p + 1] = n - p;
            array[n - p] = p;
        }
        if(n % 4){array[n/2 + 1] = 1 + n /2;}

        for(long p = 1; p <= n; p++){printf("%ld ", array[p]);}; puts("");

    }

    return 0;
}
