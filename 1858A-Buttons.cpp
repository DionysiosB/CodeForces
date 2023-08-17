#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld\n", &a, &b, &c);
        puts((a + (c % 2) > b) ? "First" : "Second");
    }

}
