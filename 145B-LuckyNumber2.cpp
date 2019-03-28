#include<cstdio>

int main(){

    long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    if((c > d + 1) || (d > c + 1)){puts("-1"); return 0;}

    a -= c, b -= c;
    bool left(0), right(0);

    if(c == d){if(a > 0){--a; right = 1;} else{left = 1, --b;}}
    else if(d > c){--a, --b; left = 1; right = 1;}
    if(a < 0 || b < 0){puts("-1"); return 0;}

    if(left){printf("7");}
    while(a--){printf("4");}
    while(c--){printf("47");}
    while(b--){printf("7");}
    if(right)printf("4");

    puts("");

    return 0;
}
