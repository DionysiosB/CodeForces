#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long k; scanf("%ld", &k);
        puts(k % 2 ? "YES" : "NO");
    }

}
