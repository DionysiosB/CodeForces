#include <iostream>

int main(){

    long n; scanf("%ld\n", &n);
    int open(0), close(0);
    for(long p = 0; p < n; p++){
        char x; scanf("%c", &x);
        if(x == '('){printf("%d", open); open = 1 - open;}
        else{printf("%d", close); close = 1 - close;}
    }

    std::cout << std::endl;

    return 0;
}
