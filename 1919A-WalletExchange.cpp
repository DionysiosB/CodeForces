#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        a += b; 
        puts(a % 2 ? "Alice" : "Bob");
    }

}
