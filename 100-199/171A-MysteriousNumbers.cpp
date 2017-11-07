#include <cstdio>


long inverse(long input){

    long output(0);
    while(input > 0){output = 10 * output + (input % 10); input /= 10;}
    return output;
}


int main(){

    long x(0), y(0); scanf("%ld %ld", &x, &y);
    printf("%ld", x + inverse(y));

    return 0;
}
