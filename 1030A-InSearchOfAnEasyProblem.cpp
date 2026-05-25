#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    bool hard(false);
    while(n--){
        int x; scanf("%d", &x);
        if(x){hard = true; break;}
    }

    puts(hard ? "HARD" : "EASY");

    return 0;
}
