#include<cstdio>

bool isLeap(int n){return (n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0));}

int main() {

    long y; scanf("%ld", &y);
    long next = y;
    int diff(0);

    while(true){
        diff += 1 + isLeap(next);
        ++next;
        if(diff % 7 == 0 && isLeap(next) == isLeap(y)){break;}
    }

    printf("%ld\n", next);

    return 0;
}
