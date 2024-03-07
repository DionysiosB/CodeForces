#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        bool possible = (a % 2 == 0 && a / 2 != b) || (b % 2 == 0 && b / 2 != a);
        puts(possible ? "Yes" : "No");
    }

}
