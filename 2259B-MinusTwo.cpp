#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long odds(0), twos(0), fours(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(a % 2){++odds;}
            else if(a % 4){++twos;}
            else{++fours;}
        }

        long evens = (twos > fours ? twos : fours);
        long ans = (odds > evens ? odds : evens);
        printf("%ld\n", ans);
    }

}
