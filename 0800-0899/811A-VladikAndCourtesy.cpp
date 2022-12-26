#include <cstdio>

int main(){

    long a, b; scanf("%ld %ld", &a, &b);
    long given(1);
    while(a >= 0 && b >= 0){
        if(given & 1){a -= given;}
        else{b -= given;}
        ++given;
    }

    puts((a < 0) ? "Vladik" : "Valera");

    return 0;
}
