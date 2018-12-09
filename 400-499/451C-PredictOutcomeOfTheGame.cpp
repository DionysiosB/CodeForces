#include <cstdio>

int main(){

    long T; scanf("%ld\n", &T);

    while(T--){

        long long n, k, d1, d2; scanf("%lld %lld %lld %lld\n", &n, &k, &d1, &d2);

        if(n % 3 != 0){puts("no"); continue;}

        bool possible = 0;

        // a - b = d1; c - b = d2;
        if((d1 + 2 * d2 <= k) && ((k - d1 - 2 * d2) % 3 == 0) && (2 * d1 + d2 <= n - k) &&  ((n - k - 2 * d1 - d2)) % 3 == 0){possible = 1;}

        // a - b = d1; c - b = d2;
        if((d1 <= d2) && (d1 + d2 <= k) && ((k - d1 - d2) % 3 == 0) && (2 * d2 - d1 <= n - k) &&  ((n - k - 2 * d2 + d1) % 3 == 0)){possible = 1;}

        // a - b = d1; c - b = d2;
        if((d2 <= d1) && (d1 + d2 <= k) && ((k - d1 - d2) % 3 == 0) && (2 * d1 - d2 <= n - k) &&  ((n - k - 2 * d1 + d2) % 3 == 0)){possible = 1;}

        // b - a = d1; c - b = d2;
        if((2 * d1 + d2 <= k) && ((k - 2 * d1 - d2) % 3 == 0) && (d1 + 2 * d2 <= n - k) &&  ((n - k - d1 - 2 * d2)) % 3 == 0){possible = 1;}

        // a - b = d1; c - b = d2;
        if((d1 <= d2) && (2 * d2 - d1 <= k) && ((k - 2 * d2 + d1) % 3 == 0) && (d1 + d2 <= n - k) &&  ((n - k - d1 - d2) % 3 == 0)){possible = 1;}

        // a - b = d1; c - b = d2;
        if((d2 <= d1) && (2 * d1 - d2 <= k) && ((k - 2 * d1 + d2) % 3 == 0) && (d1 + d2 <= n - k) &&  ((n - k - d1 - d2) % 3 == 0)){possible = 1;}

        if(possible){puts("yes");} else {puts("no");}


    }

    return 0;
}
