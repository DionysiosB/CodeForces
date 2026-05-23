#include <cstdio>
#include <iostream>
#include <cmath>

int main(){

    long a, b; std::cin >> a >> b;

    long f, g, x, y;
    bool possible = 0;

    for(f = 1; f < a; f++){
        g = sqrt(a * a - f * f);
        if(f * f + g * g != a * a){continue;}
        x = (b * g) / a; y = (b * f) / a;
        if(x * x + y * y !=  b * b){continue;}
        if(g == y){continue;}
        possible = 1;
        break;
    }

    if(possible){puts("YES"); printf("0 0\n%ld %ld\n%ld %ld\n", f, g, -x, y);}
    else{puts("NO");}

    return 0;
}
