#include <cstdio>

long luckyMask(long input){

    long output(0), mult(1);
    while(input > 0){
        if(input % 10 == 4 || input % 10  == 7){output += mult * (input % 10); mult *= 10;}
        input /= 10;
    }

    return output;
}

int main(){

    long a(0), b(0); scanf("%ld %ld", &a, &b);

    long output(a + 1);
    while(luckyMask(output) != b){++output;}
    printf("%ld\n", output);

    return 0;
}
