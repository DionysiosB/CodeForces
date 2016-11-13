#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    long count(0);

    if(k > (n * n + 1) / 2){puts("NO"); return 0;} 

    puts("YES");
    bool flip = 0;
    for(long p = 0; p < n * n; p++){
        if(count < k && p % 2 == flip){++count; printf("L");} else{printf("S");}
        if((p + 1) % n == 0){if(!(n % 2)){flip = 1 - flip;}; puts("");}
    }

    return 0;
}
