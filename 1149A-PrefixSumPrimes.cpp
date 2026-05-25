#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long ones(0), twos(0);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ones += (x == 1); twos += (x == 2);}
    if(twos){printf("2 "); --twos;}
    if(ones){printf("1 "); --ones;}
    while(twos--){printf("2 ");}
    while(ones--){printf("1 ");}
    puts("");

    return 0;
}
