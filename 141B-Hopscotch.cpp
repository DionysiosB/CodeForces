#include <cstdio>

int main(){

    long a(0), x(0), y(0); scanf("%ld %ld %ld", &a, &x, &y);
   
    long output(-1);
    if(y > 0 && y < a){if(-a < 2*x && 2*x < a){output = 1;}}
    else if((y/a)%2 == 0 && y > (y/a)*a && -a < x && x < 0){output = 3 * (y/a) / 2;}
    else if((y/a)%2 == 0 && y > (y/a)*a && x > 0 && x < a){output = 3 * (y/a)/2 + 1;}
    else if((y/a)%2 == 1 && y > (y/a)*a && -a < 2*x && 2*x < a){output = (3 * (y/a) + 1)/2;}

    printf("%ld\n", output);

    return 0;
}
