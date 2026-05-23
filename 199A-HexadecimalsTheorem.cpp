#include <cstdio>

int main(){
    long input; scanf("%ld", &input);
    long first(0), second(0), temp(0), newFib(1);
    while(newFib < input){first = second; temp = newFib; newFib += second; second = temp;}
    if(input == 1){second = 1;}
    printf("%ld %ld %ld\n", second - first, first, first);
    return 0;
}
