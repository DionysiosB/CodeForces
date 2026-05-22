#include <cstdio>

bool isBeautiful(int year){
    int a = year %10;
    int b = (year / 10)%10; if(b == a){return 0;}
    int c = (year / 100) % 10; if(c == a || c == b){return 0;} 
    int d = (year / 1000) % 10; if(d == a || d == b || d == c){return 0;}
    return 1;
}


int main(){
    int number; scanf("%d\n", &number);
    while(!isBeautiful(++number));
    printf("%d\n",number);
    return 0;
}
