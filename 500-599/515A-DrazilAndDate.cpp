#include <cstdio>

int main(){

    long a, b, s; scanf("%ld %ld %ld", &a, &b, &s);
    if(a < 0){a = - a;}
    if(b < 0){b = - b;}
    long dist = a + b;
    if(s < dist || (dist - s) % 2 != 0){puts("No");}
    else{puts("Yes");}

    return 0;
}
