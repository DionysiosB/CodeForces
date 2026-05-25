#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(k % 3){puts(n % 3 ? "Alice" : "Bob");}
        else{
            long m = n % (k + 1);
            puts(((m % 3) || (m == k)) ? "Alice" : "Bob");
        }
    }

    return 0;
}
